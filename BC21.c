//描述
//给你两个整数，要求输出这两个整数的和
//输入描述：
//输入两个整数 a, b （0 <= a, b <= 1000）
//输出描述：
//输出一个整数.

//一
#include <stdio.h>

int main() {
    int a, b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    if(0<=a&&b<=1000){
        printf("%d",c);
    }else{
        printf("输入错误\n");
    }
    return 0;
}

//二
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d",&a,&b);
    if(0<=a&&b<=1000){
        printf("%d",a+b);
    }else{
        printf("输入错误\n");
    }
    return 0;
}
