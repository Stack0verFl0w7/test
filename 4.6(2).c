#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));//255
	//-1��-128��127��1
	return 0;
}