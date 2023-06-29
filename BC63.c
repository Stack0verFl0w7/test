#include <stdio.h>

int main() {
    int m, d, bool;
    float val;
    scanf("%f %d %d %d", &val, &m, &d, &bool);
    if (m == 11 && d == 11) {
        if (bool == 1) {
            if (0.7 * val - 50 > 0) {
                printf("%.2f", 0.7 * val - 50);
            }
            else {
                printf("0.00");
            }
        }
        else {
            printf("%.2f", 0.7 * val);
        }
    }
    if (m == 12 && d == 12) {
        if (bool == 1) {
            if (0.8 * val - 50 > 0) {
                printf("%.2f", 0.8 * val - 50);
            }
            else {
                printf("0.00");
            }
        }
        else {
            printf("%.2f", 0.8 * val);
        }
    }
    return 0;
}