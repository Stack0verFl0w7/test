//描述
//KiKi想知道他的考试分数是否通过，请帮他判断。从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，如果及格，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
//输入描述：
//多组输入，每行输入包括一个整数表示的分数（0~100）。
//输出描述：
//针对每行输入，输出“Pass”或“Fail”。

#include <stdio.h>

int main() {
    int score;
    while (scanf("%d", &score) != EOF) {
        if (score >= 60) {
            printf("Pass\n");
        }
        else {
            printf("Fail\n");
        }
    }
    return 0;
}
