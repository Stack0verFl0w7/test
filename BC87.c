//描述
//求一个整数的所有数位之和
//输入描述：
//输入一行，包含一个整数。
//输出描述：
//一个整数. int范围内

//第一版
#include <stdio.h>

int main() {
    int a;
    int b = 0;
    scanf("%d", &a);
    while (a != 0) {
        b += a % 10;
        a /= 10;
    }
    printf("%d", b);
    return 0;
}

//第二版
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int he = 0;
    for (int i = 0; i <= 9; i++)
    {
        he += (int)(n / pow(10,9 - i)) % 10;
    }
    printf("%d", he);
    return 0;
}
