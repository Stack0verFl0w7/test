#include <stdio.h>

int main() {
    float r1, r2;
    scanf("%f %f", &r1, &r2);
    printf("%f", 1 / ((1 / r1) + (1 / r2)));
    return 0;
}