#include <stdio.h>
typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}

void print2(Stu* tmp)
{
	printf("name:%s\n", tmp->name);
	printf("age:%d\n", tmp->age);
	printf("tele:%s\n", tmp->tele);
	printf("sex:%s\n", tmp->sex);
}

int main()
{
	Stu s = { "张三",20,"11122233344","男" };
	print1(s);
	print2(&s);
	//打印结构体数据，print2更好
	return 0;
}