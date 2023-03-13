#include <stdio.h>
//不创建临时变量，交换a,b的值，a=3,b=5
int main()
{
	int a = 3;
	int b = 5;
	a = a + b;//8
	b = a - b;//3
	a = a - b;//5
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}//这种方法有缺陷，a+b的值可能会溢出

int main()
{
	int a = 3;
	int b = 5;
	a = b - a;//2
	b = b - a;//3
	a = a + b;//5
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = 3;// 011
	int b = 5;// 101
	a = a ^ b;// 110
	b = a ^ b;// 011
	a = a ^ b;// 101
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}//这种方法不方便阅读，一般不使用，但要了解