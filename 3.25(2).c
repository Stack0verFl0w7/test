#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	//�����������μ��㣬���Ϊ���һ�����ʽ�Ľ��
	printf("%d\n", c);
	return 0;
}