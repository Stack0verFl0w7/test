//描述
//小乐乐的班主任想统计一下班级里一共有多少人需要被请家长，三个成绩（语文，数学，外语）平均分低于60的将被请家长，小乐乐想编程帮助班主任算一下有多少同学被叫家长。
//输入描述：
//共n+1行
//第一行，输入一个数n，代表小乐乐的班级中有n个同学。
//在接下来的n行中每行输入三个整数代表班级中一个同学的三科成绩（语文，数学，外语），用空格分隔。
//输出描述：
//一行，一个整数，代表班级中需要被请家长的人数。

#include<stdio.h>
int main()
{
    int n;
    int a, b, c;
    int avg = 0;
    int count = 0;
    scanf("%d\n", &n);
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        avg = (a + b + c) / 3;
        if (avg < 60)
            count++;
    }
    printf("%d\n", count);

}
