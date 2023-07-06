#include<stdio.h>

int main(){
    int hour, min, k;
    scanf("%d:%d %d", &hour, &min, &k);//按照格式输入三个数
    hour = (hour + (k + min) / 60) % 24;//计算小时，因为不考虑日期，所以先计算得到总共多少小时，再对24取余，以防出现大于24的情况
    min = (k + min) % 60;//看剩下多少分钟
    printf("%#02d:%#02d", hour, min);
    return 0;
}