//描述
//读入 3 个整数，尝试以后两个数字占 8 个空格的宽度靠右对齐输出。
//输入描述：
//输入三个整数，用空格隔开。
//输出描述：
//输出 3 个整数以第二三个数字占 8 个空格靠右对齐输出

//第一版
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%-8d%-8d%d", a, b, c);
    //%nd表示右对齐
    //%-nd表示左对齐
    return 0;
}


//第二版
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d%8d%8d", a, b, c);
    //%nd表示右对齐
    //%-nd表示左对齐
    return 0;
}
