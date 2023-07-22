//描述
//帮助牛牛计算 1+（1+2）+（1+2+3）+...+(1+2+3+...+n)
//输入描述：
//输入一个整数
//输出描述：
//输出一个整数

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
