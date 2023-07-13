//描述
//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//输入描述：
//输入一个正整数n  (1 ≤ n ≤ 109)
//输出描述：
//输出一个值，为求和结果。

#include <stdio.h>

int main() {
    long long n = 0;
    int i = 0;
    scanf("%d", &i);
    while (i > 0) {
        n = n + i;
        i--;
    }
    printf("%ld", n);
    return 0;
}
