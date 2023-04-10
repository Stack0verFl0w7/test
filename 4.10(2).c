#include <stdio.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "acbdef";
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (arr1 == arr2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
	//haha
}