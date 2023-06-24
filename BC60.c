#include <stdio.h>

int main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        getchar();
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            printf("%c is an alphabet.\n", c);
        }
        else {
            printf("%c is not an alphabet.\n", c);
        }
    }
    return 0;
}