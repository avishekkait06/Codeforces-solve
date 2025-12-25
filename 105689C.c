#include <stdio.h>

int n, cnt = 0;
char d[7];

int toNum(char *a, int len) {
    int x = 0;
    for (int i = 0; i < len; i++) x = x * 10 + (a[i] - '0');
    return x;
}

void perm(char *a, int l, int r) {
    if (l == r) {
        if (a[0] != '0') {
            int x = toNum(a, n);
            if (x >= 2001 && (x - 2001) % 12 == 0) cnt++;
        }
        return;
    }
    for (int i = l; i <= r; i++) {
        char t = a[l]; a[l] = a[i]; a[i] = t;
        perm(a, l + 1, r);
        t = a[l]; a[l] = a[i]; a[i] = t;
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf(" %c", &d[i]);
    perm(d, 0, n - 1);
    printf("%d\n", cnt);
    return 0;
}
