//描述
//输入3科成绩，然后把三科成绩输出，成绩为整数形式。
//数据范围： 
//0≤n≤100 
//输入描述：
//一行，3科成绩，用空格分隔，范围（0~100）。
//输出描述：
//一行，把3科成绩显示出来，输出格式详见输出样例。

#include <stdio.h>

int main() 
{
    int score[3]={0};
    scanf("%d %d %d",&score[0],&score[1],&score[2]);
    printf("score1=%d,score2=%d,score3=%d\n",score[0],score[1],score[2]);
    return 0;
}
