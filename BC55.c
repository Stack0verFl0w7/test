//描述
//判断一个整数n是否是闰年
//输入描述：
//（1≤n≤2018）
//输出描述：
///是闰年输出"yes" 否则输出"no"

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 100 != 0) {
        if (n % 4 == 0) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    else {
        if (n % 400 == 0) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}
