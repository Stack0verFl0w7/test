//描述
//字符常量或字符变量表示的字符在内存中以ASCII码形式存储。输入一个字符，输出该字符相应的ASCII码。
//输入描述：
//一个字符。
//输出描述：
//输出输入字符对应的ASCII码。

#include <stdio.h>
 
int main() {
    char c = 0;
    scanf("%c",&c);
    printf("%hhd",c);
    return 0;
}
//转换规则中长度指示符对应的类型等级%hhd = char、%hd = short、%d = int、%ld = long、%lld = long long。
