#define _CRT_SECURE_NO_WARNINGS 1
#include "sanziqi.h"
void meau()
{
	printf("**************************\n");
	printf("********* 1.��ʼ *********\n");
	printf("********* 0.���� *********\n");
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
		printf("���Ӯ\n");
	}
	else if (ret == '*')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'q')
	{
		printf("ƽ��\n");
	}
	dayin(arr,hang,lie);
}
int main()
{
	int input = 0;
	do
	{
		meau();
		printf("�����룺\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}