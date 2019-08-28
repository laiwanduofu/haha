#define _CRT_SECURE_NO_WARNINGS 1
#include  "clear.h"
void meau()
{
	printf("*****************************\n");
	printf("*********1 ，开始 **********\n");
	printf("******** *2，结束 **********\n");
}
void game()
{

	char mean[rows][cols] = { 0 };      //真正棋盘 
	char disply[rows][cols] = { 0 };        // 玩家棋盘
	init( disply[rows][cols], rows, cols, ' *');
	init(mean[rows][cols], rows, cols, ' 0');
	show(disply, row, col);      //显示玩家棋盘  呈现在界面上10*10
	show(mean, row, col);
	setting(mean, row, col);           //设置雷  
	show(mean, row, col);      //显示真雷
	pailei(mean, show, row, col);       //排雷
}
int main()
{
	int put = 0;
	strand((unsigned int)time(NULL));
	do{
		meau();
		printf("请输入：>>");
		scanf("%d", &put);
		switch (put)
		{
		case 1:
				game();
				break;
		case 2:
			printf("离开游戏\n");
			break;
		default:
			printf("输入错误，请重输：\n");
			break;
		}
	} while (put);
	return 0;
}