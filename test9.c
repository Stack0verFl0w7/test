#include <stdio.h>
int main()
{
	int a = 1;
	printf("%d\n", ++a);//前置++,先++,再使用
	printf("%d\n", a++);//后置++,先使用，再++
	return 0;
}