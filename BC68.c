//描述
//牛牛的一周有七天，从周一到周日对应的英文是
//1、星期一：Monday
//2、星期二：Tuesday
//3、星期三：Wednesday
//4、星期四：Thursday
//5、星期五：Friday
//6、星期六：Saturday
//7、星期日：Sunday
//牛牛知道今天是星期几，请输出这天的英文
//输入描述：
//输入今天是星期几
//输出描述：
//输出对应的英文

#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    switch (a){
    case 1:printf("Monday"); break;
    case 2:printf("Tuesday"); break;
    case 3:printf("Wednesday"); break;
    case 4:printf("Thursday"); break;
    case 5:printf("Friday"); break;
    case 6:printf("Saturday"); break;
    case 7:printf("Sunday");
    }
    return 0;
}
