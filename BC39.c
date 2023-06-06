//描述
//口渴了，要喝10升水才能解渴，但现在只有一个深 h 厘米，底面半径是 r 厘米的水杯，最少要喝多少杯水才能解渴。
//输入描述：
//输入杯子的高度 h ，底面半径 r 。
//输出描述：
//输出最少要喝多少杯水

//第一版，错误
#include <stdio.h>

int main() {
    int h, r;
    float b;
    scanf("%d %d", &h, &r);
    b = 3.14 * h * r * r;
    printf("%d", 10000 / b);
    return 0;
}

//第二版
#include <stdio.h>

int main()
{
    int h=0,r=0;
    scanf("%d%d",&h,&r);
    float v=h*3.14*r*r;
    int c=10000;
    int d=0;
    while(c>0)
    {
        c=c-v;
        d++;
    }
    printf("%d",d);
    return 0;
}
