 #define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void chushihua(char arr[HANGS][LIES], int hangs, int lies, char set)
{
	int i = 0; int j = 0;
	for (i = 0; i < HANGS; i++)
	{
		for (j = 0; j <LIES; j++)
		{
			arr[i][j] = set;

		}

	}

}
void dayin(char arr[HANGS][LIES], int hang, int lie)
{
	int i = 0; int j = 0;
	for (i = 0; i <= lie; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= hang; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= lie; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n"); 
	}

}
void sezhi(char arr[HANGS][LIES], int hang, int lie)
{
	int count = leishu;
	while (count)
	{
		int x = rand() % hang + 1;
		int y = rand() % lie + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}

}

void pailei(char mean[HANGS][LIES], char show[HANGS][LIES], int hang, int lie)
{
	int win = 0;
	while (win<hang*lie-leishu)
	{
		int x = 0;
		int y = 0;
		printf("ÇëÊäÈë×ø±ê:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= hang&&y >= 1 && y <= lie)
		{
			if (mean[x][y] == '1')
			{
				printf("ºÜÒÅº¶£¬Äã±»Õ¨ËÀÁË\n");
				dayin(mean, hang, lie);
				break;
			}
			else
			{
				int count = tongjishu(mean, x, y);
				show[x][y] = count + '0';
				dayin(show, hang, lie);
				win++;
			}
		}
		else
		{
			printf("ÇëÖØÐÂÊäÈë\n");
		}
	}
	if (win==hang*lie - leishu)
	{
		printf("¹§Ï²Äã£¬Ó®À²£¡");
	}
}

int tongjishu(char mean[HANGS][LIES], int x, int y)
{
	return mean[x - 1][y] + mean[x-1][y - 1] + mean[x ][y -1]
		+ mean[x + 1][y - 1] + mean[x + 1][y ] + mean[x + 1][y+1]
		+ mean[x][y + 1] + mean[x - 1][y + 1] - 8 * '0';


}