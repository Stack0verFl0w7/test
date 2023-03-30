#include <stdio.h>
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	char arr[] = "hello world\n";
	struct T t = { "hi",{100,'v',"hello", 3.14},arr };
	printf("%s\n", t.ch);//hi
	printf("%s\n", t.s.arr);//hello
	printf("%lf\n", t.s.d);//3.140000
	printf("%s\n", t.pc);//hello world
	return 0;
}