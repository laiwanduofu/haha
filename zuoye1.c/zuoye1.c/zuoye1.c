
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//100到200之间的素数
//int main()
//{
//	int b; int c;
//	for (b = 100; b <= 200; b++)
//
//	{
//		for (c = 2; c <= (int)sqrt(b); c++)
//		{
//			if (b%c == 0)
//				break;
//		}
//		if (b%c != 0)
//			printf("%d\t", b);
//			
//		
//
//		
//	}
//	system("pause");
//	return 0;
//}
////99乘法表
//
//int main()
//{
//	int A; int B ;
//	for (A = 1; A <= 9; A++)
//	{
//		
//		for (B = 1; B <= A; B++)
//		{
//
//			printf("%d*%d=%d\t", A,  B,  A*B);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//判断闰年平年


//int main()
//{
//	int i=0;
//	
//	
//	for (i = 1000; i <= 2000; i++)
//	{
//
//		if ((i / 4 == 0 && i/ 100 != 0) || (i/ 400 == 0));
//		{
//			printf(" %d",i);
//		}
//	}
//	
//	system("pause");
//	
//	return 0;
//}



////定义函数
// int frist_1(int x, int y)
//{
//	int a = x + y;
//	return a;
//}
// /*调用函数*/
// int main()
// {
//	 int b; int c; int d;
//	 scanf("%d%d", &b, &c);
//	 d = frist_1(b, c);
//	 printf("d=%d", d);
//	 system("pause");
//	 return 0;




// }
//交换两值内容
//int main()
//{
//	int a = 20; int b = 50; int c ;
//	 c = a;
//	 a = b;
//	 b = c;
//	 printf("%d%d\t",a,b );
//	system("pause");
//	return 0;
//}
//交换两值内容不用中间值
//int main()
//{
//	int a = 20; int b = 40;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d%d", a, b);
//
//
//	system("pause");
//	return 0;
//}
//求10个整数中最大整数
//int main()
//{
//	int arr[10] = { 0 }; int i;
//	
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] > arr[0])
//			arr[0] = arr[i];
//		if (arr[i] <= arr[0])
//			arr[0] = arr[0];
//		printf("%d", arr[0]);
//	}
//	
//	printf("%d", arr[0]);
//	system("pause");
//	return 0;
//}
//求三个数中最大数
//int main()
//{
//	
//	int arr[3] = { 2, 5, 1 }; int i;
//	for (i = 0; i <= 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <= 3; i++)
//
//	{
//		if (arr[i] > arr[0])
//			printf("%d", arr[i]);
//	}
//	
//	system("pau se");
//	return 0;
//			
//}
//求两个数的最大共约数
//void main()
//{
//	int a; int e; 
//	scanf("%d,%d",&a, &e);
//	int c;
//	
//	while (c=a%e)
//	{
//		
//		a = e;
//		e = c;
//	}
//	printf("%d", e);
//
//	system("pause"); 
	
//}1到100中含9的个数
//int main()
//{
//	int i;  int a;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			a++;
//		if (i / 10 == 9)
//			++a;
//	}
//	printf("%d",a)
//
//	system("pause");
//	return 0;
//}
//对两个数组进行交互
int main()
{
	int a[3] = { 2, 5, 9 }; int b[3] = { 8, 4, 6 }; int c[];
	for (int d = 0; d <= 3; d++)
	{
		c[3] = a[3];
		a[3] = b[3];
		b[3] = c[3];
	}
	for (int d = 0; d <= 3; d++)
	{
		printf("a%d=%d", d , a[d]);
	}
	printf("\n");
	for (int d = 0; d <= 3; d++)
	{
		printf("b%d=%d", d, b[d]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//int main()
//{
//	char arra[] = { "***************" };
//
//	int left = 0; int right = strlen(arra) - 1;
//	for (arra[0] = 1; arra[0] < 15; arra[0] += 2)
//	{
//		{ arra[left] = arra[right];
//		left += 2;
//		right += 2;
//		printf("%s\n", arra);
//		}
//		if (arra[0] = 15)
//		{
//			printf("%s\n", arra);
//		}
//
//	}
//	system("pause");
//	return 0;
//}
