#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////打印乘法表
//void plus(int n)
//{
//	int i = 0; int j = 0;
//	printf("请输入：>\n");
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
////交换数字
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
////判断素数
//void su_shu(int i)
//{
//	printf("请输入：>\n");
//	scanf("%d", &i);
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j !=0)
//		{
//			printf("是素数");
//		}
//	}
//	printf("不是素数");
//}
//int main()
//{
//	int i = 0;
//	su_shu(i);
//	system("pause");
//	return 0;
//}
////判断闰年
//void is_runnian(int i)
//{
//	printf("请输入;>\n");
//	scanf("%d", &i);
//	if ((i/ 4 == 0 && i / 100 != 0 )|| (i / 400 == 0) == 0)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("是平年");
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
//void chu_shi(int*px, int sz, int set)           //初始化
//{
//	printf("请输入：\n");
//	scanf("%d", &set);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		*px = set;
//		printf(" %d", *px);
//	}
//}
//	
//void qingkong(int*px, int sz, int set)           //清空
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		*px = set;
//		printf(" %d", *px);
//	}
//}
//
//void ni_xu(int arr1[], int sz)          //逆序
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
//	chu_shi(arr1, sz, i);       //初始化
//	qingkong(arr1, sz, 0);      //清空
//	ni_xu(arr1, sz);                   //逆序排列
//	system("pause");
//	return 0;
//}
