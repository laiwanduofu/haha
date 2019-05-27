#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//3,平均数（考虑溢出）
# if 0
int main()
{
	int a = 0; int b = 0;
	int ret = 0;
	printf("请输入：\n");
	scanf("%d,%d", &a, &b);
	if (a > b)
	{
		ret = a - (a - b) / 2;
		printf("%d\n", ret);
	}
	else
	{
		printf("%d\n", b - (b - a) / 2);
	}
	system("pause");
	return 0;
}
# endif
//3,找出数组中出现次数为1的数
# if 0
int main()
{
	int arr[5] = { 1, 2, 1, 2, 5 };
	int i = 0; int sum = 0;
	for (i = 0; i <= 4; i++)
	{
		sum = arr[i] ^ sum;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
#endif
# if 0
unsigned reverse_bit(unsigned x)
{
	int n;  int tem; int count = 0;
	while (tem != 0)                 //逆序打印二进制每一位
	{
		tem=n % 2;
		count++;                         
		tem=n / 2;
	}
	tem = tem << (32 - count);           //放在开头
	(char) tem;
	int a = 0;
	while (tem = getchar(), tem != '\n')
	{
		a = a * 2 + (tem - '0');

	}
	return a;

}
int main()
{
	int input = 0; int b;
	printf("请输入:\n");
	scanf("%d", &input);
    b=reverse_bit(input);
	printf("%d\n", b);
	system("pause");
	return 0;
}
#endif
//改字符数组内容
typedef struct he
{
	char a[20];
	char b[20];
	char c[20];
}haha;
int main()
{
	haha he={ "student", "am", "i" };
	strcpy(he.a, "i", he.b, "am", he.c, "student");
	return 0;
}