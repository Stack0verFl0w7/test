//条件表达式-exp1?exp2:exp3
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 1)
//		b = 2;
//	else
//		b = -2;
//	printf("%d\n", b);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	b = (a > 1 ? 2 : -2);
	printf("%d\n", b);
	return 0;
}