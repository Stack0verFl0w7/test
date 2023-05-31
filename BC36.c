#include <stdio.h>

int main() {
    double f, c;
    scanf("%lf", &f);
    c = 5 / 9 * (f - 32);
    printf("%.3lf", c);
    return 0;
}