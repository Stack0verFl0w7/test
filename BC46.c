//描述
//KiKi这学期努力学习程序设计基础，要期末考试了，BoBo老师告诉他，总成绩包括四个部分，如下：
//总成绩 = 实验成绩 * 20% + 课堂表现成绩 * 10% + 过程考核成绩 * 20% + 期末上机考试成绩 * 50%，现在输入KiKi的各项成绩，请计算KiKi的总成绩。
//输入描述：
//一行，包括四个整数（百分制），用空格分隔，分别表示实验成绩，课堂表现成绩，过程考核成绩，期末上机考试成绩。
//输出描述：
//一行，总成绩，保留小数点一位。

#include <stdio.h>

int main() {
    int s, k, g, q;
    scanf("%d %d %d %d", &s, &k, &g, &q);
    printf("%.1f", s * 0.2 + k * 0.1 + g * 0.2 + q * 0.5);
    return 0;
}