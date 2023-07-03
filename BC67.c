//描述
//牛牛尝试在蒙住眼睛的情况下拿到旁边的金币，假设的坐标是 (x,y) ，金币的坐标是 (x1,y1) ，金币一定在牛牛在周围，即 ∣x 1−x∣+∣y 1−y∣=1 
//输入描述：
//第一行输入 x ,y 表示牛牛的坐标。
//第二行输入 x1,y1 表示金币的坐标。
//坐标是整数。
//输出描述：
//输出牛牛应该往哪个方向伸手。
//例 
//(x,y)=(0,0) (x1,y1)=(0,1) ，则牛牛向上伸手，输出 'u' 。
//(x,y) =(0,0) (x1,y1) = (0,-1) ，则牛牛向下伸手，输出 'd'。
//(x,y) =(0,0) (x1,y1) = (1,0) ，则牛牛向右伸手，输出 'r'。
//(x,y) =(0,0) (x1,y1) = (-1,0) ，则牛牛向左伸手，输出 'l'。

//第一版
#include <stdio.h>
int main()
{
    int x, y, x1, y1;
    scanf("%d %d\n%d %d", &x, &y, &x1, &y1);
    if (x1 - x == 0 && y1 > y)
        printf("u");
    else if (x1 - x == 0 && y1 < y)
        printf("d");
    else if (x1 > x && y1 - y1 == 0)
        printf("r");
    else if (x1 < x && y1 - y1 == 0)
        printf("l");
    return 0;
}

//第二版
int main()
{
    int x,y,x1,y1;
    scanf("%d %d",&x,&y);
    scanf("%d %d",&x1,&y1);
    if (x1==x)
        y1>y?printf("u"):printf("d");
    else
        x1>x?printf("r"):printf("l");
    return 0;
}
