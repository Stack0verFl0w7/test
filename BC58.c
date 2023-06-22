#include <stdio.h>

int main() {
    float k, m, BMI;
    scanf("%f %f", &k, &m);
    BMI = k / (m * m);
    if (BMI >= 18.5 && BMI <= 23.9) {
        printf("Normal\n");
    }
    else {
        printf("Abnormal\n");
    }
    return 0;
}