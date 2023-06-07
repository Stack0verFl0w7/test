//描述
//有一个半径为 r 的球，求这个球的体积。
//π  取3.14 ， r 是一个整数
//输入描述：
//输入球的半径
//输出描述：
//输出球的体积

#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);
    printf("%f", 4.0 / 3.0 * 3.14 * r * r * r);
    return 0;
}
