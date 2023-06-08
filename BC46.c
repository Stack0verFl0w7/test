#include <stdio.h>

int main() {
    int s, k, g, q;
    scanf("%d %d %d %d", &s, &k, &g, &q);
    printf("%.1f", s * 0.2 + k * 0.1 + g * 0.2 + q * 0.5);
    return 0;
}