//描述
//有一个线段在二维坐标系中，已知线段两个点的坐标 (x1,y1)，(x2,y2) 。
//输入描述：
//第一行输入 x1 和 y1，用空格隔开。
//第二行输入 x2 和 y2，用空格隔开。
//其中 x1 ， y1 ，x2 ，y2 都是整数
//输出描述：
//输出线段的长度的平方

//第一版
#include <stdio.h>

int main() {
    int x1, x2, y1, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    printf("%d", (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return 0;
}

//第二版
#include<stdio.h>
#include<math.h>    //pow(x,y) 求x的y次方    //abs(x) 求x的绝对值
int main(){
    int x1,y1,x2,y2;
    int r1,r2,r3,r4;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d\n",&x2,&y2);
    r1=abs(x1-x2);
    r2=abs(y1-y2);
    r3=pow(r1,2);
    r4=pow(r2,2);
    printf("%d",r3+r4);
    return 0;
}
