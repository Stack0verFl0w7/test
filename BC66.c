#include<stdio.h>

int main() {
    int n = 0;
    int t1 = 0;//��·��Ҫ��ʱ��
    float t2 = 0;//����Ҫ��ʱ��
    scanf("%d", &n);
    t1 = n;
    t2 = 10.0f + (float)n / 10.0f;//ʱ����ھ�������ٶ�
    if (t1 <= t2)
        printf("%c", 'w');
    else
        printf("%c", 'v');
    return 0;
}