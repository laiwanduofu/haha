#define _CRT_SECURE_NO_WARNINGS 1
#include  "clear.h"
void meau()
{
	printf("*****************************\n");
	printf("*********1 ����ʼ **********\n");
	printf("******** *2������ **********\n");
}
void game()
{

	char mean[rows][cols] = { 0 };      //�������� 
	char disply[rows][cols] = { 0 };        // �������
	init( disply[rows][cols], rows, cols, ' *');
	init(mean[rows][cols], rows, cols, ' 0');
	show(disply, row, col);      //��ʾ�������  �����ڽ�����10*10
	show(mean, row, col);
	setting(mean, row, col);           //������  
	show(mean, row, col);      //��ʾ����
	pailei(mean, show, row, col);       //����
}
int main()
{
	int put = 0;
	strand((unsigned int)time(NULL));
	do{
		meau();
		printf("�����룺>>");
		scanf("%d", &put);
		switch (put)
		{
		case 1:
				game();
				break;
		case 2:
			printf("�뿪��Ϸ\n");
			break;
		default:
			printf("������������䣺\n");
			break;
		}
	} while (put);
	return 0;
}