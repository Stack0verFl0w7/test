#include <stdio.h>
//写一段代码得出当前机器的字节序是什么
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		return 1;
	else
		return 0;
}

int main()
{
	int ret = check_sys();
	if (ret = 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;
}
