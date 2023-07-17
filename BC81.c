//描述
//KiKi知道了什么是质数（只能被1和他自身整除的数），他现在想知道所有三位整数中，有多少个质数。
//输入描述：
//无
//输出描述：
//一行，一个整数，表示所有三位整数中，有多少个质数。

#include<stdio.h>
int main(){
    int n = 1;
    int count = 0;
    for (int i = 100; i <= 999; i++){
        n = 1;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                n = 0;
            }
        }
        if (n){
            count++;
        }
    }
    printf("%d ", count);
    return 0;
}
