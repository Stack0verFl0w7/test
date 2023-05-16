//描述
//输入两个整数a, b, 输出a 除以b的余数，5除以2的余数为1，10除以4的余数为2
//输入描述：
//输入两个整数，在int范围内
//输出描述：
//输出一个整数

//第一版
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a % b);
    return 0;
}

//第二版
#include <stdio.h>

int main() {
    int a, b, c;
    c=a % b;
    scanf("%d %d", &a, &b);
    printf("%d", c);
    return 0;
}
