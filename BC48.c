#include <stdio.h>

int main() {
    int x1, x2, y1, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    printf("%d", (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return 0;
}