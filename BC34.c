//描述
//根据给出的三角形3条边a, b, c，计算三角形的周长和面积。
//数据范围： 
//0<a,b,c≤100000 
//输入描述：
//一行，三角形3条边（能构成三角形），中间用一个空格隔开。
//输出描述：
//一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p;
    scanf("%f %f %f", &a, &b, &c);
    p = (a + b + c) / 2;
    printf("circumference=%.2f area=%.2f", 2 * p, sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
