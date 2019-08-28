#define _CRT_SECURE_NO_WARNINGS 1
#include "clear.h"

void  init(char arr[rows][cols], int ROW, int COL, int set)             //初始化函数
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
void show(char arr[rows][cols], int ROW, int COL)              //打印函数
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{  
		printf("%d", i);
		for (int j = 0; j <=col; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}
void setting(char arr[rows][cols], int ROW, int COL)                     //设置雷的个数
{
	int count = shuliang;
	while (count)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}
void pailei(char arr1[rows][cols], char arr2[rows][cols], int ROW, int COL)                   //排雷函数
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL - shuliang)      //赢的跳出条件
	{
		if (x >= 1 && x <= ROW&&y >= 1 && y <= COL)
		{
			if (arr1[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				show(arr1, ROW, COL);
				break;
			}
			else{
				int count = tongji(arr1,x,y);
				arr2[x][y] = count + '0';     //整形变字符类型
				show(arr2, ROW, COL);
				win++;
			}

		}
		else{
			printf("输入错误，请重输\n");
		}
	}
	if (win == ROW*COL - shuliang)
	{
		printf("恭喜你，赢了");
	}
}
int tongji(char mean[rows][cols], int x, int y)       //统计周围8个位置的雷数  字符类型变整形
{
	return mean[x - 1][y] + mean[x - 1][y - 1] + mean[x][y - 1]
		+ mean[x + 1][y - 1] + mean[x + 1][y] + mean[x + 1][y + 1]
		+ mean[x][y + 1] + mean[x - 1][y + 1] - 8 * '0';


}