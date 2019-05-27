#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
// 1,整数二进制中一的个数
int count_ont_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		
		if ((value & 1) == 1)
		{
			count++;
		}
		value=value>>1;
	}
	return count;
}
int main()
{
	 unsigned int value = 0;
	 int haha = 0;
	printf("请输入：\n");
	scanf("%d\n", &value);
	 haha=count_one_bits(value);
	printf("%d\n",haha );
	system("pause");
	return 0;
}
//2，输出二进制偶数位和奇数位
void shuchu(unsigned int value)
{
	int i ;
    for (i = 1; i <= 32; i += 2)
	{
		printf("%d", i);
	}
	printf("/n");
	for (i = 2; i <= 32; i += 2)
	{ 
		printf("%d", i);
	}
}

int main()
{
	unsigned int value = 0;
	
	printf("请输入：\n");
	scanf("%d\n", &value);
	  shuchu(value);
	system("pause");
	return 0;
}

//3,整数的每一位
 void dayin(unsigned int input)
{
	if (input > 9)
	{
		dayin(input/10);
	}
	printf("%d\n", input % 10);
}
int main()
{
	int input = 0;
	printf("请输入：\n");
	scanf("%d\n", &input);
	dayin(input);
	system("pause");
	return 0;
}

//4,两个整数二进制中有多少位相同
int arrx[32] = { 0 }; int arry[32] = { 0 };
void dayin(unsigned int x,unsigned y)                                    //打印每一位
{
	if (x > 9)
	{
		dayin(x/ 10);
	}
	 arrx[32]=printf("%d\n", x % 10); 
	if (y > 9)
	{
		dayin(y / 10);
	}
	   arry[32]=printf("%d\n", y % 10);
} 

void counttongji(int arrx[], int arry[], int szx, int szy)             //统计个数
{
	int i = 0;  int j = 0;   int count = 0;
	for (i = 0, j = 0; i <= szx - 1, j <= szy - 1; i++, j++)
	{
		if (arrx[i] == arry[j])
		{ 
			count++;
		}
		arrx[i] = arrx[i + 1];
		arry[j] = arry[j + 1];
	}
	printf("%d\n", count);

}
int main()
{
	int x = 0; int y = 0;
	int szx = sizeof(arrx) / sizeof(arrx[0]);
	int szy = sizeof(arry) / sizeof(arry[0]);
	printf("请输入：\n");
	scanf("%d\n", &x ,&y);
	dayin(x,y);
	counttongji(arrx, arry, szx,szy);
	system("pause");
	return 0;
}
