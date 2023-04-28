//描述
//输入3科成绩，然后把三科成绩输出，成绩为整数形式。
//数据范围： 
//0≤n≤100 
//输入描述：
//一行，3科成绩，用空格分隔，范围（0~100）。
//输出描述：
//一行，把3科成绩显示出来，输出格式详见输出样例。

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 100 && a >= 0 && b <= 100 && b >= 0 && c <= 100 && c >= 0) {
        printf("score1=%d,score2=%d,score3=%d", a, b, c);
    }
    else {
        printf("ÊäÈë´íÎó\n");
    }
    return 0;
}
