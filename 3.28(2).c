#include <stdio.h>
int main()
{
	char ch[5] = { 0 };
	int arr[5] = { 1, 2, 3, 4, 5 };
	printf("%d\n", &arr[0] - &arr[4]);
	//printf("%d\n", &arr[0] - &ch[4]);-����
	//ָ���ָ��ʱ������ָ�����ָ��ͬһ�ռ�
	return 0;
}