#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = (a + b % 7) % 7;
    if (c != 0) {
        printf("%d", c);
    }
    else {
        printf("%d", 7);
    }
    return 0;
}