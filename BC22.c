//描述
//输入两个整数a, b, 输出a/b的值，只保留整数部分
//输入描述：
//输入两个整数,在int范围内
//输出描述：
//输出一个整数

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a / b);
    return 0;
}
