#include <stdio.h>
int main()
{
	char arr1[] = "abc";//a b c \0
	char arr2[] = { 'a','b','c'};//a b c x x x x x
	char arr3[] = { 'a','b','c',0 };
	char arr4[] = { 'a','b','c','\0' };
	//strlen-���ַ������ȣ�����"\0"����
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//���ֵ
	printf("%d\n", strlen(arr3));//3
	printf("%d\n", strlen(arr4));//3
	return 0;
}