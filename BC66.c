#include<stdio.h>

int main() {
    int n = 0;
    int t1 = 0;//走路需要的时间
    float t2 = 0;//打车需要的时间
    scanf("%d", &n);
    t1 = n;
    t2 = 10.0f + (float)n / 10.0f;//时间等于距离除以速度
    if (t1 <= t2)
        printf("%c", 'w');
    else
        printf("%c", 'v');
    return 0;
}