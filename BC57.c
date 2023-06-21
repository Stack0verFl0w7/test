//描述
//气象意义上，通常以3～5月为春季(spring)，6～8月为夏季(summer)，9～11月为秋季(autumn)，12月～来年2月为冬季(winter)。请根据输入的年份以及月份，输出对应的季节。
////输入描述：
//输入的数据格式是固定的YYYYMM的形式，即：年份占4个数位，月份占2个数位。
//输出描述：
//输出月份对应的季节（用英文单词表示，全部用小写字母）。

//第一版，错误
#include <stdio.h>

int main() {
    int arr[6]={0};
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[4]==0){
        if(arr[5]<=2){
            printf("winter\n");
        }
        if(arr[5]>=3&&arr[6]<=5){
            printf("spring\n");
        }
        if(arr[5]>=6&&arr[6]<=8){
            printf("summer\n");  
        }
        if(arr[5]==9){
            printf("autumn\n");  
        }
    }
    if(arr[4]!=0){
        if(arr[5]==2){
            printf("winter\n");
        }
        else{
            printf("autumn\n");
        }
    }
    return 0;
}

//第二版
#include<stdio.h>
int main() {
    int year, month;
    scanf("%4d%02d", &year, &month);
    switch (month) {
    case 3:
    case 4:
    case 5: {
        printf("spring");
    }
          break;
    case 6:
    case 7:
    case 8: {
        printf("summer");
    }
          break;
    case 9:
    case 10:
    case 11: {
        printf("autumn");
    }
           break;
    case 12:
    case 1:
    case 2: {
        printf("winter");
    }
          break;
    }
    return 0;
}

