#pragma once
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

#define ROW 3
#define COL 3

void Initboard(char board[][COL], int row, int col);            //��ʼ��(����)

void Displayboard(char board[ROW][COL], int row, int col);      //��ӡ(����)

void PlayerMove(char board[ROW][COL], int row, int col);        //�����

void ComputerMove(char board[ROW][COL], int row, int col);      //������

char IsWin(char board[ROW][COL], int row, int col);             //�ж���Ӯ
 




