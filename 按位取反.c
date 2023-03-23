#include <stdio.h>
int main()
{
	int a = 11;//           00....1011 
	a = a | (1 << 2);//     00....0100
	printf("%d\n", a);//15  00....1111
	a = a & (~(1 << 2));//  11....1011   
	printf("%d\n", a);//11  00....1011
	return 0;
}