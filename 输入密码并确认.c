#include <stdio.h>
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//输入密码,并存放在password数组中
	while ((ch = getchar()) != '\n');//防止只读取到空格
	{
		;
	}
	printf("请确认（Y/N）:>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}