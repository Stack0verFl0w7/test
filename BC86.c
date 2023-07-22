#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    int sum1 = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum = sum + i;
        sum1 += sum;
    }
    printf("%d", sum1);
    return 0;
}