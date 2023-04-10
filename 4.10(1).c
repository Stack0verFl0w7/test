#include <stdio.h>
int main()
{
	char* p = "abcdef";//const char* p = "abcdef";
	*p = 'w';//段错误
	printf("%s\n", p);
	return 0;
	//一般char* p前要加const,保护后面的常量字符串
}