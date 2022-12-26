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
	ret =rand()%100+1;						//生成随机数
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if(guess>ret)
			printf("猜大了\n");
		if(guess<ret)
			printf("猜小了\n");
		if(guess==ret)
		{
			printf("恭喜你，猜对了!\n");
			break;
		}
	}
}

int main()
{
	int chose;			//选择菜单

	srand((unsigned int)time(NULL));		//定义随机数起点
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
			printf("输入错误！\n");
		}
	}
	system("pause");
}