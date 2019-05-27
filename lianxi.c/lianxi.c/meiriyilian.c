#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
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
//				return 0;
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
//}





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
//对两个数组进行交互
//int main()
//{
//	int a[3] = { 2, 5, 9 }; int b[3] = { 8, 4, 6 }; int c[3];
//	for (int d = 0; d <= 3; d++)
//	{
//		c[3] = a[3];
//		a[3] = b[3];
//		b[3] = c[3];
//	}
//	for (int d = 0; d <= 3; d++)
//	{
//		printf("%d", a[d]);
//	}
//	printf("\n");
//	for (int d = 0; d <= 3; d++)
//	{
//		printf("%d", b[d]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;  
//}
//加减
//int main()
//{
//	int a; int b = 1; float c;
//	for (a = 1; a <= 100; a++)
//	{
//		c += b*1.0 / a;
//		b = -b;
//	}
//	system("pause");
//	return 0;
//}
//}1到100中含9的个数
//int main()
//{
//	int i;  int a = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			a++;
//		}
//		}
//		printf("%d", a);
//	
//	system("pause");
//	return 0;  
//}


//计算n阶乘
//int main()
//{
//	int a = 0; int b = 0; int c = 1;
//	scanf("%d", &b);
//	for (a = 1; a <= b; a++)
//	{  
//		c = c*a;
//	}
//
//
//
//	printf("%d\n",c);
//	system("pause");
//	
//		 return 0;
//}
//计算1到n的阶乘相加
//int main()
//{
//	int a = 0; int b = 0; int c = 1; int d = 0; int e = 0;
//	scanf("%d", &e);
//	for (b= 1; b <= e; b++)
//	{
//		int a= 1;
//		for (a= 1; a<= b; a++)
//		{
//			c = c*a;
//
//		}
//
//		d = c + d;
//	}
//	printf("%d\n", d);
//	system("pause");
//	return 0;
//}
//密码登录
//int main()
//{
//	int a = 0; char keyword[20] = { 0 };
//	printf("请输入密码：>");
//	for (a = 0; a < 3; a++)
//	{
//		scanf("%s", &keyword);
//		
//		if (strcmp(keyword, "LP19981226") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//			printf("登录错误,请重新输入\n");
//	}
//	if (a == 3)
//		printf("三次错误，请重启开始\n");
//	system("pause");
//
//	return 0;  
//}
//二分查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int a = 0;//左边的数               
//	int b = sizeof (arr) /sizeof (arr[0]) - 1;//右边的数
//	
//	int d = 3;//要找的数
//	
//	
//	while (a <= b)
//	{
//		int c = (b - a) / 2 + a;  //中间的数
//		if (arr[c] < d)
//		{
//			a = c + 1;
//		}
//		else if (arr[c]>d)
//		{
//			b = c - 1;
//		}
//		else
//			printf("找到了，下标是：%d\n",c);
//		break;
//	}
//	if (a > b)
//		printf("找不到\n");
//
//	system("pause");
//	return 0;
//}
//打印“welcome to bit!”
//int main()
//{
//	char arra[] = "welcome to bit!";     int left = 0;
//	char arrb[] = "####### ## ###!";    int right = strlen (arra)-1;
//	
//	while (left <= right)
//	{
//		arrb[left] = arra[left];
//		arrb[right] = arra[right];
//		printf("%s", arrb);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//
//	system("pause");
//	return 0;
//}
//封装二分查找

//int haha(int arr[10], int k, int sz){
//	int a = 0;//左边的数               
//	int b = sz - 1;//右边的数
//
//	
//
//	
//	while (a <= b)
//	{
//		int c = (b - a) / 2 + a;  //中间的数
//		if (arr[c] < k)
//		{
//			a = c + 1;
//		}
//		else if (arr[c]>k)
//		{
//			b = c - 1;
//		}
//		else
//			return c;
//		
//	}
//
//}
//
//int main()
//{
//	
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5; int sz = sizeof (arr) / sizeof (arr[0]);
//	 int ret = haha(arr, k,sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是:%d", ret);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 0;//a为行数
//	scanf("%d", &a);
//	for (b = 0; b < a; b++)
//	{
//		int c = 0;
//		for (c = 0; c <a - 1 - b; c++)
//		{
//			printf(" ");
//		}
//		for (c = 0; c <2 * b + 1; c++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	for (b = 0; b < a - 1; b++)
//	{
//		int c = 0;
//		for (c = 0; c < b + 1; c++)
//		{
//			printf(" ");
//		}
//		for (c = 0; c <2 * (a - 1-b) - 1; c++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//水仙花数
//int main()
//{
//	int i = 0; 
//	for (i = 0; i <= 999; i++)
//	{
//		int n = i;
//		int count = 1;
//		while (n / 10 > 0)
//		{
//			count++;
//			n = n / 10;
//		} 
//		n = i;
//		int sum = 0;
//		while (n)
//		{
//			sum += pow(n % 10, count);
//			n = n / 10;
//		}
//		if (sum == i)
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}
//项数和
//int main()
//{
//	int i = 0; int n = 0; int b = 0;
//	int sum = 0; int e = 0;
//	scanf("%d%d", &e, &n);
//	for (i = 0; i < n; i++)
//	{
//		b = b * 10 + e;
//		sum += b;
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}
//猜数字=定义函数+主函数（调用定义的函数）重点是生成随机数
//打印菜单
//void meau()
//{
//	printf("****************\n");
//	printf("****--1,开始--**\n");
//	printf("****--0,结束--**\n");
//}
//void game()
//{
//	int ret = 0; int gause = 0;
//	ret = rand() % (100) + 1;
//	while (1)
//	{
//		printf("请猜数字:>\n");
//		scanf("%d", &gause);
//		if (gause > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (gause < ret)
//		{ 
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}

//主函数
//int main()
//{ 
//	int input = 0;
//	srand((unsigned int)time(NULL));//选取随机数
//	do{
//		meau();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//		system("pause");
//		return 0;
//	}

//转换大小写
//int main()
//{
//	char input=0;
//	printf("请输入：> \n");
//	scanf("%c", &input);
//	if (input >= 'a'&&input <= 'z')
//	{
//		printf("转换后的字符：%c\n", input - 32);
//	}    
//	if (input >= 'A'&&input <= 'Z')
//	{
//		printf("转换后的字符：%c\n", input +32);
//	}
//	else
//	{
//		printf("结束\n");
//	}
//
//	system("pause");
//	return 0;
//}