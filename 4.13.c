#include <stdio.h>
struct s1
{
	double d;//8
	char c;//1
	int i;//4
};

struct s2
{
	char c1;//1
	struct s1 s1;//16
	double d;//8
};

int main()
{
	printf("%d\n", sizeof(struct s1));//16-8+1+(3)+4
	printf("%d\n", sizeof(struct s2));//32-1+(7)+16+8
	return 0;
}
