//描述
//牛牛准备继续进阶，计算更难的数列
//输入一个整数n,计算 1+1/（1-3）+1/（1-3+5）+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))的值
//输入描述：
//输入一个整数
//输出描述：
//输出一个浮点数，保留3位小数

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


