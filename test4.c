#include <stdio.h>

#define MAX 1 //#define-�����ʶ������
int main()
{
	int arr[MAX] = { 0 };//MAXΪ��ʶ������
	printf("%d\n", MAX);
	return 0;
}

enum Sex //��ö�ٹؼ���enum����һ����
{
	MALE,
	FEMALE,
	SECRET
};
//MALE,FEMALE,SECRET-ö�ٳ���

int main()
{
	enum Sex s = FEMALE;
	printf("%d\n", s);//1
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	return 0;
}