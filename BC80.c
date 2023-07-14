//描述
//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//输入描述：
//一行，一个正整数N。（1≤N≤100,000）
//输出描述：
//一行，1~N之间奇数的个数和偶数的个数，用空格分开。

#include <stdio.h>

int main() {
    int N;
    int Odd=0;
    int Even=0;
    int i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(i%2==1){
            Odd++;
        }else{
            Even++;
        }
    }
    printf("%d %d",Odd,Even);
    return 0;
}
