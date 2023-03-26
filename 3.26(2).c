#include <stdio.h>
int main()
{
	//ÕûĞÍÌáÉı
	char a = 3;//00000011
	char b = 127;//01111111
	char c = a + b;//-126
	printf("%d\n", c);
	return 0;
}