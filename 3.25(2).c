#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	//从左向右依次计算，结果为最后一个表达式的结果
	printf("%d\n", c);
	return 0;
}