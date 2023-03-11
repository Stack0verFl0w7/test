#include <stdio.h>

#define MAX 1 //#define-定义标识符常量
int main()
{
	int arr[MAX] = { 0 };//MAX为标识符常量
	printf("%d\n", MAX);
	return 0;
}

enum Sex //用枚举关键字enum定义一个类
{
	MALE,
	FEMALE,
	SECRET
};
//MALE,FEMALE,SECRET-枚举常量

int main()
{
	enum Sex s = FEMALE;
	printf("%d\n", s);//1
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	return 0;
}