#include <stdio.h>
#pragma pack(4)//设置默认对齐数为4
struct S
{
	char c;
	double d;
};
#pragma pack()//取消设置的默认对齐数

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}
