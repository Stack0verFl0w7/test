//描述
//给朋友们买电影票，已知一张电影票价是100元，计算 x 位朋友的总票价是多少？
//输入描述：
//输入一个正整数 x ，表示朋友个数
//输出描述：
//输出总票价 （不需要给自己买票）

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", num * 100);
    return 0;
}
