#define _CRT_SECURE_NO_WARNINGS 1
#include "clear.h"

void  init(char arr[rows][cols], int ROW, int COL, int set)             //��ʼ������
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
void show(char arr[rows][cols], int ROW, int COL)              //��ӡ����
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
void setting(char arr[rows][cols], int ROW, int COL)                     //�����׵ĸ���
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
void pailei(char arr1[rows][cols], char arr2[rows][cols], int ROW, int COL)                   //���׺���
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL - shuliang)      //Ӯ����������
	{
		if (x >= 1 && x <= ROW&&y >= 1 && y <= COL)
		{
			if (arr1[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				show(arr1, ROW, COL);
				break;
			}
			else{
				int count = tongji(arr1,x,y);
				arr2[x][y] = count + '0';     //���α��ַ�����
				show(arr2, ROW, COL);
				win++;
			}

		}
		else{
			printf("�������������\n");
		}
	}
	if (win == ROW*COL - shuliang)
	{
		printf("��ϲ�㣬Ӯ��");
	}
}
int tongji(char mean[rows][cols], int x, int y)       //ͳ����Χ8��λ�õ�����  �ַ����ͱ�����
{
	return mean[x - 1][y] + mean[x - 1][y - 1] + mean[x][y - 1]
		+ mean[x + 1][y - 1] + mean[x + 1][y] + mean[x + 1][y + 1]
		+ mean[x][y + 1] + mean[x - 1][y + 1] - 8 * '0';


}