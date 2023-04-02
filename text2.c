#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
struct S
{
	char id[10];
	char name[20];
	int age;
};
void printf1(struct S* tmp)
{
	printf("%s %s %d",(*tmp).id,tmp->name,tmp->age );
}
int main()
{     
	struct S a = { "123", "nihao", 20 };
	printf1(&a);
	printf("\n");
	printf("%d\n", offsetof(struct S, id));
		printf("%d\n", offsetof(struct S, name));
	printf("%d\n", offsetof(struct S,age));
}
