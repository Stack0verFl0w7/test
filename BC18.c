//描述
//从键盘读入一个字符，一个整数，一个单精度浮点数，按顺序输出它们，并用空格分隔，浮点数保留 6 位小数。
//输入描述：
//读入一个字符，一个整数，一个单精度浮点数用换行符隔开，
//输出描述：
//按顺序输出字符、整数、单精度浮点数，用空格分隔，浮点数保留 6 位小数

#include <stdio.h>

int main() {
    char ch;
    int i;
    float f;
    scanf("%c\n%d\n%f\n", &ch, &i, &f);
    printf("%c %d %.6f, ch, i, f);
    return 0;
}
