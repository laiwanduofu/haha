#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////��ӡ�˷���
//void plus(int n)
//{
//	int i = 0; int j = 0;
//	printf("�����룺>\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{ 
//		for (j = 1; j <= i; j++)
//		{
//			printf("%3d * %d=%2d", i, j, i*j );
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	plus(n);
//	system("pause");
//	return 0;
//}
// 
////��������
//void  change( int *px, int *py)
//{
//	
//		int temp = *px;
//		*px = *py;
//		*py = temp;
//		printf("%d%d",*px,*py);
//}
//int main()
//{
//	int a =20;
//	int b=80;
//	 change(&a, &b );
//	 system("pause");
//	return 0;
//}
// 
////�ж�����
//void su_shu(int i)
//{
//	printf("�����룺>\n");
//	scanf("%d", &i);
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j !=0)
//		{
//			printf("������");
//		}
//	}
//	printf("��������");
//}
//int main()
//{
//	int i = 0;
//	su_shu(i);
//	system("pause");
//	return 0;
//}
////�ж�����
//void is_runnian(int i)
//{
//	printf("������;>\n");
//	scanf("%d", &i);
//	if ((i/ 4 == 0 && i / 100 != 0 )|| (i / 400 == 0) == 0)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��ƽ��");
//	}
//}
//int main()
//{
//	int i = 0;
//	is_runnian(i);
//	system("pause");
//	return 0;
//}
//    
//void chu_shi(int*px, int sz, int set)           //��ʼ��
//{
//	printf("�����룺\n");
//	scanf("%d", &set);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		*px = set;
//		printf(" %d", *px);
//	}
//}
//	
//void qingkong(int*px, int sz, int set)           //���
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		*px = set;
//		printf(" %d", *px);
//	}
//}
//
//void ni_xu(int arr1[], int sz)          //����
//{
//	int left = 0; int right = sz-1;
//	while (left < right)
//	{
//		int tem = arr1[left];
//		arr1[left] = arr1[right];
//		arr1[right] = tem;
//		printf("%d", arr1[left]);
//		left++;
//		printf("%d", arr1[right]);
//		right--;
//		
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr1[4] = { 1, 2, 3, 4 };
//	 int sz = sizeof(arr1) / sizeof(arr1[0]);
//	chu_shi(arr1, sz, i);       //��ʼ��
//	qingkong(arr1, sz, 0);      //���
//	ni_xu(arr1, sz);                   //��������
//	system("pause");
//	return 0;
//}
