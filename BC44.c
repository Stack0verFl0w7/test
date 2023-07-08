#include <stdio.h>
//法一：无法通过，会出现算法复杂度过大的情况！--暴力求解不太行
/*
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    //求最大公约数
    long long max = n>m?m:n;//假设n和m的较小值为最大公约数
    while( 1 )
    {
        if( n%max==0 && m%max==0)
        {
            break;
        }
        max--;
    }//此时max里面记录的就是最大公约数
    //最小公倍数
    long long min = n>m?n:m; //假设n和m的较大值为最小公倍数
    while(1)
    {
        if( min%n==0 && min%m==0 )
        {
            break;
        }
        min++;
    }
    printf("%lld",min+max);
    return 0;
}
*/

//重新优化后的算法
int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    //求最大公约数
    long long max = 0;
    long long min = 0;
    long long tmp = 0;
    //先将n和m进行保存，防止下面使用辗转相除的方法影响n和m的值
    long long a = n;
    long long b = m;

    //辗转相除法
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    max = m;
    //最小公倍数=n*m/max
    min = a * b / max;
    printf("%lld", min + max);
    return 0;
}
