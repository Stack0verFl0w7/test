#include <stdio.h>
int main()
{
	char* p = "abcdef";//const char* p = "abcdef";
	*p = 'w';//�δ���
	printf("%s\n", p);
	return 0;
	//һ��char* pǰҪ��const,��������ĳ����ַ���
}