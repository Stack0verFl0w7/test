#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//��ַ-��Ԫ�صĵ�ַ
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);//&arr-ȡ��������������ĵ�ַ
	printf("%p\n", &arr+1);
	return 0;
}