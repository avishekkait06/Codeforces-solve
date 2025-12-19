#include <stdio.h>

int main() {
    char n[25];
    scanf("%s", n);

    int count = 0;

    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] == '4' || n[i] == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7)
        printf("YES");
    else
        printf("NO");

    return 0;
}
