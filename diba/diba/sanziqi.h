#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define hang 3
#define lie  3
void chushihua(char arr[hang][lie], int hang , int lie,);
void dayin(char arr[hang][lie], int hang, int lie);
void wanjia(char arr[hang][lie], int hang, int lie);
void diannao(char arr[hang][lie], int hang, int lie);
int iswin(char arr[hang][lie], int hang, int lie);