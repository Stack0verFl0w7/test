//描述
//输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c , c=5/9*(f-32)
//输入描述：
//输入一个浮点数f(1 <= f<= 100000)
//输出描述：
//输出浮点数,保留3位小数

#include <stdio.h>

int main() {
    double f, c;
    scanf("%lf", &f);
    c = 5 / 9 * (f - 32);
    printf("%.3lf", c);
    return 0;
}
