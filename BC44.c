#include <stdio.h>
//��һ���޷�ͨ����������㷨���Ӷȹ���������--������ⲻ̫��
/*
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    //�����Լ��
    long long max = n>m?m:n;//����n��m�Ľ�СֵΪ���Լ��
    while( 1 )
    {
        if( n%max==0 && m%max==0)
        {
            break;
        }
        max--;
    }//��ʱmax�����¼�ľ������Լ��
    //��С������
    long long min = n>m?n:m; //����n��m�Ľϴ�ֵΪ��С������
    while(1)
    {
        if( min%n==0 && min%m==0 )
        {
            break;
        }
        min++;
    }
    printf("%lld",min+max);
    return 0;
}
*/

//�����Ż�����㷨
int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    //�����Լ��
    long long max = 0;
    long long min = 0;
    long long tmp = 0;
    //�Ƚ�n��m���б��棬��ֹ����ʹ��շת����ķ���Ӱ��n��m��ֵ
    long long a = n;
    long long b = m;

    //շת�����
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    max = m;
    //��С������=n*m/max
    min = a * b / max;
    printf("%lld", min + max);
    return 0;
}
