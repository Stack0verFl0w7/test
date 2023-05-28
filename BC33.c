//描述
//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//数据范围：
//1≤n≤100  ， 成绩使用百分制且不可能出现负数
//输入描述：
//两行，第1行，正整数n（1≤n≤100）
//     第2行，n科成绩（范围0.0~100.0），用空格分隔。
//输出描述：
//输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。

//第一版，错误
#include <stdio.h>

int main() {
    int n, i;
    double average, max, min, j;
    average = 0;
    max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &j);
        average += j;
        if (j > max) {
            max = j;
        }
        if (i = 0) {
            min = j;
        }
        if (i > 0 && j < min) {
            min = j;
        }
    }
    average = average / n;
    printf("%.2f %.2f %.2f", max, min, average);
    return 0;
}

//第二版
#include <stdio.h>

int main() {
    int n,i;
    double average,max,min,j;
    average=0;
    max=0;
    min=100;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&j);
        average+=j;
        if(j>max){
            max=j;
        }
        if(j<min){
            min=j;
        }
    }
    average=average/n;
    printf("%.2f %.2f %.2f",max,min,average);
    return 0;
}

//第三版
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    float score[100]={0};
    float max=0.0;
    float min=100.0;
    float sum=0.0;
    float avg=0.0;
    int i;
    for(i=0;i<n;i++){
        scanf("%f",&score[i]);
        sum+=score[i];
        if(score[i]>max){
            max=score[i];
        }
        if(score[i]<min){
            min=score[i];
        }
    }
    avg=sum/n;
    printf("%.2f %.2f %.2f",max,min,avg);
    return 0;
}
