#include <stdio.h>
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);
	return 0;
	//n的值为:9
	//* pFloat的值为 : 0.000000
	//num的值为 : 1091567616
	//* pFloat的值为 : 9.000000
}