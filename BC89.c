//描述
//今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
//输入描述：
//无
//输出描述：
//一行，一个整数，表示1~2019中共有多少个数包含数字9。

#include <stdio.h>

int main(){
    int cnt = 0;
    for (int i = 1; i <= 2019; i++){
        int m = i;
        while (m > 0){
            if (m % 10 == 9){
                cnt++;
                break;
            }else{
                m /= 10;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
