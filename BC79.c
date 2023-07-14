//描述
//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//输入描述：
//输入一个正整数n  (1 ≤ n ≤ 109)
//输出描述：
//输出一个值，为求和结果。

//第一版
#include <stdio.h>

int main() {
    long long n = 0;
    int i = 0;
    scanf("%d", &i);
    while (i > 0) {
        n = n + i;
        i--;
    }
    printf("%lld", n);
    return 0;
}

//第二版
#include <stdio.h>

int main() {
    long long n=0;
    int i=0;
    int j=1;
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        n+=j;
    }
    printf("%lld",n);
    return 0;
}

//第三版
#include <stdio.h>

int main()
{
    //等差数列求和公式
    long long n = 0;
    scanf("%lld", &n);
    long long sum = 0;
    sum = (1 + n) * n / 2;
    printf("%lld\n", sum);
    return 0;
}
