#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
//100��200֮�������
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
////99�˷���
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


//�ж�����ƽ��


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



////���庯��
// int frist_1(int x, int y)
//{
//	int a = x + y;
//	return a;
//}
// /*���ú���*/
// int main()
// {
//	 int b; int c; int d;
//	 scanf("%d%d", &b, &c);
//	 d = frist_1(b, c);
//	 printf("d=%d", d);
//	 system("pause");
//	 return 0;
//}





//������ֵ����
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
//������ֵ���ݲ����м�ֵ
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
//��10���������������
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
//���������������
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
//�������������Լ��
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
//������������н���
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
//�Ӽ�
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
//}1��100�к�9�ĸ���
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


//����n�׳�
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
//����1��n�Ľ׳����
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
//�����¼
//int main()
//{
//	int a = 0; char keyword[20] = { 0 };
//	printf("���������룺>");
//	for (a = 0; a < 3; a++)
//	{
//		scanf("%s", &keyword);
//		
//		if (strcmp(keyword, "LP19981226") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("��¼����,����������\n");
//	}
//	if (a == 3)
//		printf("���δ�����������ʼ\n");
//	system("pause");
//
//	return 0;  
//}
//���ֲ���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int a = 0;//��ߵ���               
//	int b = sizeof (arr) /sizeof (arr[0]) - 1;//�ұߵ���
//	
//	int d = 3;//Ҫ�ҵ���
//	
//	
//	while (a <= b)
//	{
//		int c = (b - a) / 2 + a;  //�м����
//		if (arr[c] < d)
//		{
//			a = c + 1;
//		}
//		else if (arr[c]>d)
//		{
//			b = c - 1;
//		}
//		else
//			printf("�ҵ��ˣ��±��ǣ�%d\n",c);
//		break;
//	}
//	if (a > b)
//		printf("�Ҳ���\n");
//
//	system("pause");
//	return 0;
//}
//��ӡ��welcome to bit!��
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
//��װ���ֲ���

//int haha(int arr[10], int k, int sz){
//	int a = 0;//��ߵ���               
//	int b = sz - 1;//�ұߵ���
//
//	
//
//	
//	while (a <= b)
//	{
//		int c = (b - a) / 2 + a;  //�м����
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
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���:%d", ret);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 0;//aΪ����
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
//ˮ�ɻ���
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
//������
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
//������=���庯��+�����������ö���ĺ������ص������������
//��ӡ�˵�
//void meau()
//{
//	printf("****************\n");
//	printf("****--1,��ʼ--**\n");
//	printf("****--0,����--**\n");
//}
//void game()
//{
//	int ret = 0; int gause = 0;
//	ret = rand() % (100) + 1;
//	while (1)
//	{
//		printf("�������:>\n");
//		scanf("%d", &gause);
//		if (gause > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (gause < ret)
//		{ 
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}

//������
//int main()
//{ 
//	int input = 0;
//	srand((unsigned int)time(NULL));//ѡȡ�����
//	do{
//		meau();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//		system("pause");
//		return 0;
//	}

//ת����Сд
//int main()
//{
//	char input=0;
//	printf("�����룺> \n");
//	scanf("%c", &input);
//	if (input >= 'a'&&input <= 'z')
//	{
//		printf("ת������ַ���%c\n", input - 32);
//	}    
//	if (input >= 'A'&&input <= 'Z')
//	{
//		printf("ת������ַ���%c\n", input +32);
//	}
//	else
//	{
//		printf("����\n");
//	}
//
//	system("pause");
//	return 0;
//}