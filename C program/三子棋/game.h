#pragma once
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

#define ROW 3
#define COL 3

void Initboard(char board[][COL], int row, int col);            //初始化(棋盘)

void Displayboard(char board[ROW][COL], int row, int col);      //打印(棋盘)

void PlayerMove(char board[ROW][COL], int row, int col);        //玩家走

void ComputerMove(char board[ROW][COL], int row, int col);      //电脑走

char IsWin(char board[ROW][COL], int row, int col);             //判断输赢
 




