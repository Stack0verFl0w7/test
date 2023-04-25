//描述
//从键盘上输入三个整数，并尝试在屏幕上显示第二个整数。
//输入描述：
//一行输入 3 个整数，用空格隔开。
//输出描述：
//请输出第二个整数的值。

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d\n%d\n%d\n", &a, &b, &c);
    printf("%d\n", b);
    return 0;
}
