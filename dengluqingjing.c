
#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÃÜÂëÎª£º");
		scanf("%s\n", &password);
		if (strcmp(password, "12345")==0)
		{            
			printf("µÇÂ¼³É¹¦"); break;
		}
  else
		printf("ÃÜÂë´íÎó£¬ÇëÖØÊÔ\n");
	} if (i==3)
	{
		printf("Èý´ÎÃÜÂë´íÎó£¬°ëÐ¡Ê±ÎÞ·¨µÇÂ½");

	}
}