#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i, s = 1;
    int tmp = 0;
    double sum = 0;
    for (i = 1; i <= n; i++){
        tmp += s * (2 * i - 1);
        sum += 1.0 / tmp;
        s = -s;
    }
    printf("%.3lf\n", sum);
}


