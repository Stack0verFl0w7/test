#include <stdio.h>
int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001
	float* pFloat = (float*)&n;
	printf("n的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);
	//(-1)^0*0.00000000000000000001001*2^-126
	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//01000001000100000000000000000000
	printf("num的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);
	return 0;
	//n的值为:9
	//* pFloat的值为 : 0.000000
	//num的值为 : 1091567616
	//* pFloat的值为 : 9.000000
}
