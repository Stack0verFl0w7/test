//描述
//小乐乐获得4个最大数，请帮他编程找到最大的数。
//输入描述：
//一行，4个整数，用空格分开。
//输出描述：
//一行，一个整数，为输入的4个整数中最大的整数。

//第一版
#include <stdio.h>

int main()
{
    int n = 0, a;
    for (int i = 0; i < 4; ++i)
    {
        scanf("%d", &a);
        if (a > n)
            n = a;
    }
    printf("%d", n);
    return 0;
}

//第二版

int main(){
    
    int a,b,c,d,x,y;
    
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    x=a>b?a:b;
    y=c>d?c:d;
    
    printf("%d",x>y?x:y);
    
    return 0;
}
