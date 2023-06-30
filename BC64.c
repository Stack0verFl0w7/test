#include <stdio.h>

int main() {
    float a;
    char b;
    int c;
    scanf("%f %c", &a, &b);
    if (a <= 1) {
        if (b == 'y') {
            printf("25\n");
        }
        else {
            printf("20\n");
        }
    }
    if (a > 1) {
        c = (int)a;
        if ((float)c * 10 != a * 10) {
            if (b == 'y') {
                printf("%d", 20 + (c + 1 - 1) + 5);
            }
            else {
                printf("%d", 20 + (c + 1 - 1));
            }
        }
        else {
            if (b == 'y') {
                printf("%d", 20 + (c - 1) + 5);
            }
            else {
                printf("%d", 20 + (c - 1));
            }
        }
    }
    return 0;
}