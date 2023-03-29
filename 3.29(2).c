#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	**ppa = 20;
	printf("%d\n", **ppa);//20
	printf("%d\n", a);//20
	return 0;
}