//描述
//输入一个整数，求其十位数
//输入描述：
//输入一个整数，在int范围内
//输出描述：
//输出一个整数

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", (a - a % 10) % 100 / 10);
    return 0;
}
