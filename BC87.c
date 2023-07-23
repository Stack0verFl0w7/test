//描述
//求一个整数的所有数位之和
//输入描述：
//输入一行，包含一个整数。
//输出描述：
//一个整数. int范围内

#include <stdio.h>

int main() {
    int a;
    int b = 0;
    scanf("%d", &a);
    while (a != 0) {
        b += a % 10;
        a /= 10;
    }
    printf("%d", b);
    return 0;
}
