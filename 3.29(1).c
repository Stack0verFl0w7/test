#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);//地址-首元素的地址
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);//&arr-取出的是整个数组的地址
	printf("%p\n", &arr+1);
	return 0;
}
