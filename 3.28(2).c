#include <stdio.h>
int main()
{
	char ch[5] = { 0 };
	int arr[5] = { 1, 2, 3, 4, 5 };
	printf("%d\n", &arr[0] - &arr[4]);
	//printf("%d\n", &arr[0] - &ch[4]);-错误
	//指针减指针时，两个指针必须指向同一空间
	return 0;
}