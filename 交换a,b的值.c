#include <stdio.h>
//��������ʱ����������a,b��ֵ��a=3,b=5
int main()
{
	int a = 3;
	int b = 5;
	a = a + b;//8
	b = a - b;//3
	a = a - b;//5
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}//���ַ�����ȱ�ݣ�a+b��ֵ���ܻ����

int main()
{
	int a = 3;
	int b = 5;
	a = b - a;//2
	b = b - a;//3
	a = a + b;//5
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = 3;// 011
	int b = 5;// 101
	a = a ^ b;// 110
	b = a ^ b;// 011
	a = a ^ b;// 101
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}//���ַ����������Ķ���һ�㲻ʹ�ã���Ҫ�˽�