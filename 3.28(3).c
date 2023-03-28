#include <stdio.h>
int m_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "hello world";
	int len = m_strlen(arr);
	printf("%d\n", len);
	return 0;
}