#include <stdio.h>

int main()
{
    int y = 0, m = 0, d = 0; //输入
    int y1 = 0, m1 = 0, d1 = 0;  //真正的开学时间
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &y1, &m1, &d1);
    int input = 1000 * y + m * 100 + d;
    int schoolBegin = 1000 * y1 + m1 * 100 + d1;
    int ret = schoolBegin - input;
    if (ret < 0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
