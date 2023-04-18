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

void Print1(struct S tmp)
{
	printf("%d %c %lf ", tmp.i, tmp.c, tmp.d);
}

void Print2(struct S* ps)
{
	printf("%d %c %lf ", ps->i, ps->c, ps->d);
}
//传值和传址都可以，传址更好

int main()
{
	struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s);
	return 0;
}
