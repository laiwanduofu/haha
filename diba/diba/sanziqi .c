#define _CRT_SECURE_NO_WARNINGS 1
#include "sanziqi.h"
void meau()
{
	printf("**************************\n");
	printf("********* 1.开始 *********\n");
	printf("********* 0.结束 *********\n");
}

void game()
{
	char arr[hang][lie]=(' '); 
	int ret = 0;
	chushihua(arr, hang, lie);
	dayin(arr, hang, lie);
	while (1)
	{
		ret = iswin(arr, hang, lie);
		wanjia(arr, hang, lie);
		if (ret != ' ')
		{
			break;
		}
		dayin(arr, hang, lie);
		diannao(arr, hang, lie);
		if (ret != ' ')
		{
			break;
		}
		dayin(arr, hang, lie);
	}
	if (ret == ' x')
	{
		printf("玩家赢\n");
	}
	else if (ret == '*')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'q')
	{
		printf("平局\n");
	}
	dayin(arr,hang,lie);
}
int main()
{
	int input = 0;
	do
	{
		meau();
		printf("请输入：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}