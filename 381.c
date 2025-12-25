#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        char input[300];
        char real[300];
        fgets(input, sizeof(input), stdin);

        int len = strlen(input);
        if (input[len - 1] == '\n')
            input[len - 1] = '\0';

        int i = 0, j = 0;

        while (input[i] != '\0') {
            if (input[i] == '\\' && input[i + 1] == '0') {
                real[j++] = '\0';
                i += 2;
            } else {
                real[j++] = input[i++];
            }
        }

        real[j] = '\0';

        int slen = 0;
        while (real[slen] != '\0')
            slen++;

        int ssize = j + 1;

        printf("%d %d\n", ssize, slen);
    }

    return 0;
}
