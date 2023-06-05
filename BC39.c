#include <stdio.h>

int main() {
    int h, r;
    float b;
    scanf("%d %d", &h, &r);
    b = 3.14 * h * r * r;
    printf("%d", 10000 / b);
    return 0;
}