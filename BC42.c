#include<stdio.h>

int main(){
    int hour, min, k;
    scanf("%d:%d %d", &hour, &min, &k);//���ո�ʽ����������
    hour = (hour + (k + min) / 60) % 24;//����Сʱ����Ϊ���������ڣ������ȼ���õ��ܹ�����Сʱ���ٶ�24ȡ�࣬�Է����ִ���24�����
    min = (k + min) % 60;//��ʣ�¶��ٷ���
    printf("%#02d:%#02d", hour, min);
    return 0;
}