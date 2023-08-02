#include<stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int a = 0; a <= i; a++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}
