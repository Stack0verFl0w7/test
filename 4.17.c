#include <stdio.h>
struct S
{
	char c;
	int i;
	double d;
};

void Init(struct S* ps)
{
	ps->i = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	printf("%d\n", s.i);//100
	printf("%c\n", s.c);//w
	printf("%f\n", s.d);//3.140000
	return 0;
}
