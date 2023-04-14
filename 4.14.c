#include <stdio.h>
#pragma pack(4)
struct S
{
	char c;
	double d;
};
#pragma pack()

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}