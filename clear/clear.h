#define _CRT_SECURE_NO_WARNINGS 1
#ifndef  __GAME_H__
#define __GAME_H__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define row 10
#define col  10
#define rows  row+2
#define cols col+2
#define shuliang  10
 char show_arr[row][col];    //�������
 char real_arr[row][col];    //���������
void init( char arr[rows][cols], int ROW , int COL,int set);        //��ʼ��
void show(char[rows][cols],int ROW,int COL);                    //��ӡ
void settinig(char arr[row][col], int, int ROW, int COL);                          //����
void pailei(char arr1[rows][cols], char arr2[rows][cols], int ROW, int COL);          //����
#endif
