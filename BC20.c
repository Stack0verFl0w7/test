//描述
//输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果（范围-231~231-1）。
//输入描述：
//一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格。
//输出描述：
//一行，a+b的十进制结果。

#include <stdio.h>

int main() {
    int a, b;
    scanf("%x %o", &a, &b);
    printf("%d", a+b);
    return 0;
}
