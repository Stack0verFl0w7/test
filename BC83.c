//描述
//牛牛开始学习数列啦
//现在他想知道1-2+3-4...+n的值
//输入描述：
//输入一个整数n (1≤n≤100)
//输出描述：
//输出一个整数

//第一版
#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int j = 0;
    int sum = 0;
    int flag = 1;
    scanf("%d", &n);
    while (flag) {
        if (n % 2 == 0) {
            j = i + 1;
            sum = sum + i - j;
            i = j + 1;
        }
        else {
            sum = sum + i - j;
            j = i + 1;
            i = j + 1;
        }
        if (i > n || j > n) {
            flag = 0;
        }
    }
    printf("%d", sum);
    return 0;
}

//第二版

int main(){
	int a = 0, b = 0;
	scanf("%d", &a);
	int c = a;

	for (; c > 0; c--){
		a = c;
		if (a % 2 == 0){
			a *= -1;
		}
		b += a;
	}
	printf("%d\n", b);
	return 0;
}

//第三版
#include<stdio.h>
int main()
{
    int n=0,i=0,j=0;;
    scanf("%d",&n);
    i=n/2;
    j=n%2;
    if(j==0)
    //j=0代表为偶数，则全部抵消；
    {
        printf("%d",-i);
    }
    else
    //j=1代表为奇数，加上n；
    {
        printf("%d",n-i);
    }
}
