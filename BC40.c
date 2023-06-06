//描述
//等差数列是每项与前一项的差值都相等的数列，已知第一项 a 和第二项 b 的值，第三项是多少。
//输入描述：
//输入等差数列的第一、二项 a ， b    
//输出描述：
//输出等差数列第三项的值

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", b + (b - a));
    return 0;
}
