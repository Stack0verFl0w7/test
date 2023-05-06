//描述
//一个十六进制整数ABCDEF，对应的十进制整数是多少。
//输入描述：
//无
//输出描述：
//十六进制整数ABCDEF对应的十进制整数，所占域宽为15。
//备注：
//printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数。

#include <stdio.h>

int main() {
    int i = 0xABCDEF;
    printf("%15d", i);
    return 0;
}
