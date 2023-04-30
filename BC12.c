#include <stdio.h>

int main() {
    int i;
    float c;
    float m;
    float e;
    scanf("%d;%f,%f,%f", &i, &c, &m, &e);
    if (i >= 1 && i <= 20000000) {
        printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", i, c, m, e);
    }
    else {
        printf("ÊäÈë´íÎó\n");
    }
    return 0;
}
