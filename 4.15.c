#include <stdio.h>
#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;
};

int main()
{
	printf("%d\n", offsetof(struct S, c));//0
	printf("%d\n", offsetof(struct S, i));//4
	printf("%d\n", offsetof(struct S, d));//8
	return 0;
}
