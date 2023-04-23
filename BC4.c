//描述
//输入一个浮点数，输出这个浮点数。
//输入描述：
//输入一个浮点数
//输出描述：
//输出一个浮点数，保留三位小数

#include <stdio.h>

int main() {
    float a;
    scanf("%f\n", &a);
    printf("%.3f\n", a);
    return 0;
}
