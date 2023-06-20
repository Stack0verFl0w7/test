//描述
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//输入描述：
//输入包括一个字符。
//输出描述：
//输出该字符是字母（YES）或不是（NO）。

#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
