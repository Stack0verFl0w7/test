//描述
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//数据范围：衣服价格满足 
//1≤val≤100000 
//输入描述：
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 注：输入日期保证只有“双11”和“双12”。
//输出描述：
//一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）

//第一版
#include <stdio.h>

int main() {
    int m, d, bool;
    float val;
    scanf("%f %d %d %d", &val, &m, &d, &bool);
    if (m == 11 && d == 11) {
        if (bool == 1) {
            if (0.7 * val - 50 > 0) {
                printf("%.2f", 0.7 * val - 50);
            }
            else {
                printf("0.00");
            }
        }
        else {
            printf("%.2f", 0.7 * val);
        }
    }
    if (m == 12 && d == 12) {
        if (bool == 1) {
            if (0.8 * val - 50 > 0) {
                printf("%.2f", 0.8 * val - 50);
            }
            else {
                printf("0.00");
            }
        }
        else {
            printf("%.2f", 0.8 * val);
        }
    }
    return 0;
}

//第二版
#include<stdio.h>

int main()
{
    double price = 0.0;
    int month = 0;
    int day = 0;
    int flag = 0;

    scanf("%lf %d %d %d", &price, &month, &day, &flag);
    if (month == 11 && day == 11)
    {
            price = price * 0.7 - 50.0*flag;
    }
    else if (month == 12 && day == 12)
    {
            price = price * 0.8 - 50*flag;
    }
    if (price < 0)
    {
        printf("0.00\n");
    }
    else
    {
        printf("%.2lf\n", price);
    }

    return 0;
}
