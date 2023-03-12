#include <stdio.h>
int main()
{
	char arr1[] = "abc";//a b c \0
	char arr2[] = { 'a','b','c'};//a b c x x x x x
	char arr3[] = { 'a','b','c',0 };
	char arr4[] = { 'a','b','c','\0' };
	//strlen-求字符串长度，遇到"\0"结束
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//随机值
	printf("%d\n", strlen(arr3));//3
	printf("%d\n", strlen(arr4));//3
	return 0;
}