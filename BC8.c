//描述
//尝试用键盘读入一个字符，然后在屏幕上显示一个用这个字符填充的对角线长5个字符，倾斜放置的菱形。
//输入描述：
//输入一个char类型字符
//输出描述：
//输出一个用这个字符填充的对角线长5个字符，倾斜放置的菱形

#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    printf("  %c  \n %c%c%c \n%c%c%c%c%c\n %c%c%c \n  %c  \n", a, a, a, a, a, a, a, a, a, a, a, a, a);
    return 0;
}