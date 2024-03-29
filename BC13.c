//描述
//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//数据范围：年份满足1990≤y≤2015，月份满足1≤m≤12，日满足1≤d≤30。
//输入描述：
//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
//输出描述：
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。

//第一版，答案错误
#include <stdio.h>

int main() {
	int b[8] = { 0 };
	int i, y, m, d;
	for (i = 0; i < 8; i++) {
		scanf("%d", &b[i]);
	}
	y = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3];
	m = b[4] * 10 + b[5];
	d = b[6] * 10 + b[7];
	if (y <= 2015 && y >= 1990 && m <= 12 && m >= 1 && d <= 30 && d >= 1) {
		printf("year=%d\nmonth=%d%d\ndate=%d\n", y, b[4], b[5], d);
	}
	else {
		printf("输入错误\n");
	}
	return 0;
}

//第二版，答案错误
//考虑到循环中scanf可能获取不止一个数，改成getchar试试
#include <stdio.h>

int main() {
	int b[8] = { 0 };
	int i, y, m, d;
	for (i = 0; i < 8; i++) {
		b[i]=(int)getchar();
	}
	y = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3];
	m = b[4] * 10 + b[5];
	d = b[6] * 10 + b[7];
	if (y <= 2015 && y >= 1990 && m <= 12 && m >= 1 && d <= 30 && d >= 1) {
		printf("year=%d\nmonth=%d%d\ndate=%d\n", y, b[4], b[5], d);
	}
	else {
		printf("输入错误\n");
	}
	return 0;
}

//第三版，找原因？
#include <stdio.h>

int main() {
	int b[8] = { 0 };
	int i;
	for (i = 0; i < 8; i++) {
		b[i]=(int)getchar();
	}
	printf("year=%d%d%d%d\nmonth=%d%d\ndate=%d%d\n",b[0],b[1],b[2],b[3],b[4], b[5],b[6],b[7]);
	return 0;
}
//20130225
//year = 50484951
//month = 4850
//date = 5053

//第四版，答案正确
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%4d%2d%2d",&a,&b,&c);
     printf("year=%d\nmonth=%02d\ndate=%02d\n",a,b,c);
}
//通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。
