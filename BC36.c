//描述
//输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c , c=5/9*(f-32)
//输入描述：
//输入一个浮点数f(1 <= f<= 100000)
//输出描述：
//输出浮点数,保留3位小数

//第一版，错误
#include <stdio.h>

int main() {
    double f, c;
    scanf("%lf", &f);
    c = 5 / 9 * (f - 32);
    printf("%.3lf", c);
    return 0;
}

//第二版
#include <stdio.h>

int main() {
    double f, c;
    scanf("%lf", &f);
    c = 5.0 / 9.0 * (f - 32);
    printf("%.3lf", c);
    return 0;
//原式c=5/9*(f-32);
//得到结果为0.000,
//原因：整数相整除，不足1得0,0与其他相乘均为0
//解决：讲5或9改为5.0或9.0
}
