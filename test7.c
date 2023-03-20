#include <stdio.h>
int main()
{
	int a = 0;
	char b = '0';
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//变量的括号可以去掉
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[10]));
	return 0;
}