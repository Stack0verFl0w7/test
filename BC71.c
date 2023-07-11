//描述
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c(0<a,b,c<1000)，作为三角形的三个边，用空格分隔。
//输出描述：
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。

//第一版
#include <stdio.h>
int main()
{
    int a = 1, b = 1, c = 1;

    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}

//第二版，调用函数
#include <stdio.h>

void sanjiao(int chang, int kuan, int gao)
//定义一个判断三角形的函数
{
	if ((chang < kuan + gao) && (kuan < chang + gao) && (gao < chang + kuan))
	//判断是不是三角形
	{
		if ((chang == kuan) && (chang == gao))
		//判断是不是等边三角形
		{
			printf("Equilateral triangle!\n");
		}
		else if ((chang == kuan) || (chang == gao) || (kuan == gao))
		//判断是不是等腰三角形
		{
			printf("Isosceles triangle!\n");
		}
		else
		//以上都不是，判断为普通三角形，执行下面的语句
		{
			printf("Ordinary triangle!\n");
		}
	}
	else
	//判断不是三角形的话，执行下面的语句
	{
		printf("Not a triangle!\n");
	}
}
int main()
{
	int a, b, c;
	while ((scanf("%d%d%d", &a, &b, &c)) != EOF)
	{
		sanjiao(a, b, c);
	}
	return 0;
}




