#include <stdio.h>
int main()
{
	short a = 0;
	int b = 10;
	printf("%d\n", sizeof(a = b + 5));//2
	printf("%d\n", a);//0
	return 0;
}