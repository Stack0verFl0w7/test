//描述
//输入为一行，包括了用空格分隔的四个整数a、b、c、d（0 < a, b, c, d < 100,000）。输出为一行，为“(a+b-c)*d”的计算结果。
//输入描述：
//输入为一行，用空格分隔的四个整数a、b、c、d（0 < a, b, c, d < 100,000）。
//输出描述：
//输出为一行，为“(a+b-c)*d”的计算结果。

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", (a + b - c) * d);
    return 0;
}
