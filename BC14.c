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
}

//第三版
#include <stdio.h>

int main() {
    int a, b;
    scanf("a=%d,b=%d", &a, &b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("a=%d,b=%d", a, b);
    return 0;
}
