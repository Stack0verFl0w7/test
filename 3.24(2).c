#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	//a=1 b=2 c=3 d=4
	//a++ִ�У�++b��d++û��ִ��
	//&&������Ϊ�٣����ұ߲�����
	return 0;
}