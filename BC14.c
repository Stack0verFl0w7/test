//描述
//输入两个整数，范围-231~231-1，交换两个数并输出。
//输入描述：
//输入只有一行，按照格式输入两个整数，范围，中间用“,”分隔。
//输出描述：
//把两个整数按格式输出，中间用“,”分隔。

//第一版
#include <stdio.h>

int main() {
    int a, b, i;
    scanf("a=%d,b=%d", &a, &b);
    i = a;
    a = b;
    b = i;
    printf("a=%d,b=%d", a, b);
    return 0;
}

//第二版
#include <stdio.h>

int main() {
    int a, b;
    scanf("a=%d,b=%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d,b=%d", a, b);
    return 0;
}//这种方法有缺陷，a+b的值可能会溢出

//第三版
#include <stdio.h>

int main() {
    int a, b;
    scanf("a=%d,b=%d", &a, &b);
    a = b - a;
    b = b - a;
    a = a + b;
    printf("a=%d,b=%d", a, b);
    return 0;
}

//第四版
#include <stdio.h>

int main()
{
	int a = 3;// 011
	int b = 5;// 101
	a = a ^ b;// 110
	b = a ^ b;// 011
	a = a ^ b;// 101
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}//这种方法不方便阅读，一般不使用，但要了解
