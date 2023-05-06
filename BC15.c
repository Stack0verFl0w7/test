//描述
//实现字母的大小写转换。多组输入输出。
//输入描述：
//多组输入，每一行输入大写字母。
//输出描述：
//针对每组输入输出对应的小写字母。

//第一版
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF意为-1。本语句即只要输入项是字符即可打印
	{
		//因为回车也算一个字符，所以在输入第一个字符换行后，getchar会读取换行的回车键
		//换行的回车被读取，若防止回车被读取，可在其前面多读取一次消耗回车
		getchar();
		putchar(ch + 32);
		printf("\n");
	}
	return 0;
}

//第二版
#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch = 0;
    while(scanf("%c", &ch) != EOF) {
        getchar();
        //调用内置的tolower函数进行转换
        printf("%c\n", tolower(ch));
    }
}
