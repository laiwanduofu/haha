#ifndef __GAME_H__
#define __GAME_H__
#include <stdio.h>
#define HANG 9
#define LIE  9
#define HANGS HANG+2
#define LIES LIE+2
#define leishu 10
#include <time.h>
#include <stdlib.h>
void chushihua(char arr[HANGS][LIES], int hangs, int lies, char set);
void dayin(char arr[HANGS][LIES], int hang, int lie);
void sezhi(char arr[HANGS][LIES], int hang, int lie);
void pailei(char mean[HANGS][LIES], char show[HANGS][LIES], int hang, int lie);
int tongjishu(char mean[HANGS][LIES], int x, int y);
#endif