//描述
//有一个数字魔法，给你一个正整数n，如果n为偶数，就将他变为n/2, 如果n为奇数，就将他变为乘3加1
//不断重复这样的运算，经过有限步之后，一定可以得到1
//牛牛为了验证这个魔法，决定用一个整数来计算几步能变成1
//输入描述：
//输入一个正整数n,范围在100以内
//输出描述：
//输出一个整数

//方案一
#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    if (n > 0 && n < 100) {
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            }
            else {
                n = 3 * n + 1;
            }
            count += 1;
        }
        printf("%d", count);
    }
    return 0;
}

//方案二
#include <stdio.h>

int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    if(n>0&&n<100){
        while(n!=1){
            n = n % 2 == 0 ? n / 2 : 3 * n + 1;
            count+=1;
        }
    printf("%d",count);
    }
    return 0;
}
