#include<stdio.h>
int main()
{
    int n;
    int a, b, c;
    int avg = 0;
    int count = 0;
    scanf("%d\n", &n);
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        avg = (a + b + c) / 3;
        if (avg < 60)
            count++;
    }
    printf("%d\n", count);

}
