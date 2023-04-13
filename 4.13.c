#include <stdio.h>
struct s1
{
	double d;
	char c;
	int i;
};

struct s2
{
	char c1;
	struct s1 s1;
	double d;
};

int main()
{
	printf("%d\n", sizeof(struct s1));//16
	printf("%d\n", sizeof(struct s2));//32
	return 0;
}
