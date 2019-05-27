#define _CRT_SECURE_NO_WARNING 1
#include <stdlib.h>
#include <stdio.h>
//#define  n  5
//1,名次确定
//int main()
//{
//	int a = 0; int b = 0; int c = 0; int d = 0; int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					e = 15 - a - b - c - d;
//					if (((b == 2) + (a == 3) && (b == 2) + (e == 4) &&
//						(c == 1) + (d == 2) && (c == 5) + (d == 3) &&
//						(e == 4) + (a == 1)) == 1)
//					{
//						printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
////2,嫌疑人判断
//int main()
//{
//	char xiangyiren;
//	for (xiangyiren = 'a'; xiangyiren <= 'd'; xiangyiren++)
//	{
//		if (((xiangyiren != 'a') + (xiangyiren == 'c') + (xiangyiren == 'd') + (xiangyiren != 'd') == 3))
//		{
//			printf("xiangyiren=%c\n", xiangyiren);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//// 3,杨辉三角
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr1[n][n] = { 0 }; int hang = 0;  int k = 0;
//	printf("请输入：\n");
//	scanf("%d", &hang);
//	for (a = 1; a <= hang; a++)                     //两边的1
//	{ 
//		arr1[a][1] == arr1[a][a];
//	}
//	for (a = 3; a <= hang; a++)                        //公式
//	{
//		for (b = 2; b <= a - 1; b++)
//		{
//			arr1[a][b] = arr1[a - 1][b - 1] + arr1[a - 1][b];
//		}
//	}
//	for (a = 1; a <= hang; a++)
//	{
//		for (k = 1; k <= hang-a; k++)                             //每行之前填充
//		{
//			printf("  ");
//		}
//		for (b = 1; b <= a; b++)
//		{
//			printf("5%d", arr1[a][b]);
//		}
//		printf("\n");
//	}
//	system("pasue");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 5, 5, 3, 2, 1, 7, 9 };
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[ ]
//	}
//
//	return 0;
//}
int main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	int sum = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			ret = ret*j;
		}
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}