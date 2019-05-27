#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void manu()
{
	printf("***************************\n");
	printf("********1.开始*************\n");
	printf("********0.结束*************\n");
}
void game()
{

	char mean[HANGS][LIES] = { 0 };
	char show[HANGS][LIES] = { 0 };
	chushihua(mean, HANGS, LIES, '0');
	chushihua(show, HANGS, LIES, '*');
	dayin(show, HANG, LIE);
	sezhi (mean, HANG, LIE);
	dayin(mean, HANG, LIE);
	pailei( mean,show, HANG, LIE);

}



int main()
{ 
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
	manu();
	printf("请输入：>");
	scanf("%d", &input);
	
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("输入错误，请重新输入\n");
		break;
	}
	}while (input);
	return 0;
}
