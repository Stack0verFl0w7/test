#include <stdio.h>

int main() {
    int n, i;
    double average, max, min, j;
    average = 0;
    max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &j);
        average += j;
        if (j > max) {
            max = j;
        }
        if (i = 0) {
            min = j;
        }
        if (i > 0 && j < min) {
            min = j;
        }
    }
    average = average / n;
    printf("%.2f %.2f %.2f", max, min, average);
    return 0;
}