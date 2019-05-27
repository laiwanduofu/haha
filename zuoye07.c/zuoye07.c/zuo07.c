#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n- 2);
	}
}
int fib(int n)
{
	int a = 1; int b = 1; int c = 1;
	while (n > 2)
	{
		c = a + b;
		b = c;
		a = b;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("请输入：\n");
	scanf("%d\n", &n);

	int ret=fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;

}

//递归实现n^k
int mi(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k == 1)
		return n;
	return n*mi(n, k - 1);
}
int main()
{
	int n ; int k ;
	scanf("%d %d", &n, &k);
	int ret=mi(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//digitsum(n)
int digitsum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return n % 10 + digitsum(n / 10);
}
int main()
{
	int n = 0;
	printf("请输入：\n");
	scanf("%d\n", &n);
	int bb = digitsum(n);
	printf("%d\n", bb);
	system("pause");
	return 0;
}
//reverse_string(char * string)函数
char reverse_string(char*string)
{
	string++;
	if (*string != '\0');
	{
		reverse_string(string);
	}
	string--;
	printf("4%c", *string);
}
int main()
{
	char *string = "abcdef";
	reverse_string(string);
	system("pause");
	return 0;
}
//n阶乘
int nj(int n)
{
	if (n ==1)
	{
		return 1;
	}
	return n*nj(n - 1);
}
int main()
{
	int n = 0;
	printf("请输入：\n");
	scanf("%d\n", &n);
	int haha=nj(n);
	printf("%d\n", haha);
	system("pause");
	return 0;
}
//打印整数的每一位
int da_yin(int n)
{
	if (n > 9)
	{
		da_yin(n / 10);
	}
	printf("%d", n % 10);
}
int main()
{
	int n = 0;
	printf("请输入：\n");
	scanf("%d", &n);
	da_yin(n);
	system("pause");
	return 0;
}
//strlen
#include <string.h>
int my_string(char*bbc)                      //非递归
{
	int count = 0;
	while (*bbc != '0')
	{
		count++;
		bbc++;
	}
	return count;
}
int my_string(char*bbc)                         //递归
{
	if (*bbc != 0)
		return 1 + my_string(bbc + 1);
}
int main()
{
	char ste = "abcdef";
	int len = my_string("abcdef");
	printf("%d", len);
	system("pause");
	return 0;
}