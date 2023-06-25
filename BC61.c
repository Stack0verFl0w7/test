#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 != 0 && n % 3 != 0 && n % 7 != 0) {
        printf("n");
    }
    if (n % 2 == 0) {
        n = n / 2;
        printf("2 ");
    }
    if (n % 3 == 0) {
        n = n / 3;
        printf("3 ");
    }
    if (n % 7 == 0) {
        n = n / 7;
        printf("7 ");
    }
    return 0;
}