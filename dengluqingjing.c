
#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����Ϊ��");
		scanf("%s\n", &password);
		if (strcmp(password, "12345")==0)
		{            
			printf("��¼�ɹ�"); break;
		}
  else
		printf("�������������\n");
	} if (i==3)
	{
		printf("����������󣬰�Сʱ�޷���½");

	}
}