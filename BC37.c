//描述
//有一个半径为 r 的圆，请你计算这个圆的面积。
//π  取 3.14
//输入描述：
//输入一个半径 r
//输出描述：
//输出圆的面积

#include <stdio.h>

int main() {
    float r, s;
    scanf("%f", &r);
    s = 3.14 * r * r;
    printf("%f", s);
    return 0;
}
