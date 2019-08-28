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
 char show_arr[row][col];    //玩家棋盘
 char real_arr[row][col];    //设计者棋盘
void init( char arr[rows][cols], int ROW , int COL,int set);        //初始化
void show(char[rows][cols],int ROW,int COL);                    //打印
void settinig(char arr[row][col], int, int ROW, int COL);                          //埋雷
void pailei(char arr1[rows][cols], char arr2[rows][cols], int ROW, int COL);          //排雷
#endif
