//描述
//小S：终于可以开学啦！好开心啊！
//小Y：你没看新闻吗，开学日期又延后了。
//小S：NOOOOOOOOOOOOOOOO！
//小S知道原计划星期X开学，通知开学时间延期N天，请问开学日期是星期几（星期日用7表示）？
//输入描述：
//输入包含两个数字X，N（1≤X≤7, 1≤N≤1000）。
//输出描述：
//输出一个数字，表示开学日期是星期几。

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = (a + b % 7) % 7;
    if (c != 0) {
        printf("%d", c);
    }
    else {
        printf("%d", 7);
    }
    return 0;
}
