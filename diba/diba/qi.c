#define _CRT_SECURE_NO_WARNIN 1
#include "sanziqi.h"

void chushihua(char arr[hang][lie], int hang, int lie)
{
	int i = 0; int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void dayin(char arr[hang][lie], int hang, int lie)
{
	int i = 0; int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < lie - 1)
			{
				printf("|");
			}
		}
	printf("\n");
	if (i < hang - 1)
	{
		for (j = 0; j < lie; j++)
		{ 
			printf("---", arr[i][j]);
			if (j < lie - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
	void wanjia(char arr[hang][lie], int hang, int lie)
	{
		int x = 0; int y = 0;
		printf("玩家走\n");
		while (1)
		{
			printf("请输入\n");
			scanf("%d%d", &x, &y);
			if ((x > 0 && x <= hang) && (y > 0 && y <= lie))
			{
				if (arr[x - 1][y - 1] = ' ')
				{
					arr[x - 1][y - 1] = 'x';
					break;
				}
				else
				{
					printf("占用\n");
				}

			}
			else
			{
				printf("请重新输入\n");
			}
		}
	}
		void diannao(char arr[hang][lie], int hang, int lie)
		{
			int x = 0; int y = 0;
			printf("电脑走\n");
			while (1)
			{
				x = rand() % hang;
				y = rand() % lie;
				if (arr[x][y] == ' ')
				{
					arr[x][y] = '*';
					break;
				}
			}
		}
		int isfull(char[hang][lie], int hang, int lie)
		{
			for (i = 0; i < hang; i++)
			{
				for (j = 0; j < lie; j++)
				{
					if (arr[i][j]==' ')
					{
						return 0;
					}
				}
			}
			return 1;
		}
		int iswin(char arr[hang][lie], int hang, int lie)
		{
			int i = 0;
			for (i = 0; i < hang; i++)
			{
				if (arr[i][0] = arr[i][1] && arr[i][1] = arr[i][2] && arr[i][0] != ' ')
				{
					return arr[i][0];
				}
			}
			for (i = 0; i < lie; i++)
			{
				if (arr[0][i] = arr[1][i] && arr[1][i] = arr[2][i] && arr[0][1] != '  ')
				{
					return arr[0][i];
				}
			}
			if (arr[0][0] = arr[1][1] && arr[1][1] = arr[2][2] && arr[0][0] != ' ')
			{
				return arr[0][0];
			}
			if (arr[0][2] = arr[1][1] && arr[1][1] = arr[2][0] && arr[0][2] != ' ')
			{
				return arr[0][2];
			}
			if (isfull(arr, hang, lie))
			{
				return 'q';
			}
			return ' ';
		}