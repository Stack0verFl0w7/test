#include <stdio.h>
#include <windows.h>
int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		//9 8 7 6 5 4 3 2 1 0 4294967295 4294967294 ...
		Sleep(100);
	}
	return 0;
}