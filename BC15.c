#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF��Ϊ-1������伴ֻҪ���������ַ����ɴ�ӡ
	{
		//��Ϊ�س�Ҳ��һ���ַ��������������һ���ַ����к�getchar���ȡ���еĻس���
		//���еĻس�����ȡ������ֹ�س�����ȡ��������ǰ����ȡһ�����Ļس�
		getchar();
		putchar(ch + 32);
		printf("\n");
	}
	return 0;
}
