#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>
void menu()
{
	printf("***************************\n");
	printf("***  1.play    2.exit   ***\n");
	printf("***************************\n");
}

void game()
{
	int ret;
	int guess;
	ret =rand()%100+1;						//���������
	while(1)
	{
		printf("�������:>");
		scanf("%d",&guess);
		if(guess>ret)
			printf("�´���\n");
		if(guess<ret)
			printf("��С��\n");
		if(guess==ret)
		{
			printf("��ϲ�㣬�¶���!\n");
			break;
		}
	}
}

int main()
{
	int chose;			//ѡ��˵�

	srand((unsigned int)time(NULL));		//������������
	while(1)
	{
		menu();
		scanf("%d",&chose);
		if(chose==1)
		{
			game();
		}
		else if(chose==2)
		{
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	system("pause");
}