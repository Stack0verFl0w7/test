//描述
//问题：一年约有 3.156×10^7 s，要求输入您的年龄，显示该年龄合多少秒。
//数据范围： 
//0<age≤200 
//输入描述：
//一行，包括一个整数age。
//输出描述：
//一行，包含一个整数，输出年龄对应的秒数。

//第一版
#include <stdio.h>

int main() {
    int age, s;
    scanf("%d", &age);
    s = age * 3156;
    printf("%d0000", s);
    return 0;
}

//第二版
#include<stdio.h>

int main(){
    long age,second;
    scanf("%ld",&age);
    second = age * 31560000 ; 
    printf("%ld",second);
    return 0;
}
