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
	printf("%d\n", s.i);
	printf("%c\n", s.c);
	printf("%f\n", s.d);
	return 0;
}