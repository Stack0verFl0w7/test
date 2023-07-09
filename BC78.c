//描述
//2023年来到了，KiKi要对他的n位好朋友说n遍”Happy new year!Good luck!”的祝福语。
//输入描述：
//输入只有一行，其中含有一个正整数 n(1≤n≤20)，代表KiKi说祝福话的遍数。
//输出描述：
//输出 n行"Happy new year!Good luck!"。

#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Happy new year!Good luck!\n");
    }
    return 0;
}
