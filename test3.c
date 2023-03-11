#include <stdio.h>
int main()
{
	const int n = 1;//const-常属性，n为const修饰的常变量，n是变量但又有常属性
	int arr[1] = { 0 };
	//int arr[n] = { 0 };-错误，n是变量
	return 0;
}