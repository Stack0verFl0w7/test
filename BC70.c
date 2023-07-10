//描述
//KiKi最近学习了信号与系统课程，这门课里有一个非常有趣的函数，单位阶跃函数，其中一种定义方式为：
//     1,t>0
//f(t)=0.5,t=0
//     0,t<0
//现在试求单位冲激函数在时域t上的值。
//输入描述：
//题目有多组输入数据，每一行输入一个t
//输出描述：
//输出函数的值并换行。

#include <stdio.h>

int main() {
    int arr[3];
    int i;
    while (scanf("%d", &arr[i]) != EOF) {
        getchar();
        if (arr[i] > 0) {
            printf("1\n");
        }
        if (arr[i] == 0) {
            printf("0.5\n");
        }
        if (arr[i] < 0) {
            printf("0\n");
        }
        i++;
    }
    return 0;
}
