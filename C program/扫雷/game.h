#pragma once
# include <stdio.h>

#define BOMB 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void Initboard(char board[ROWS][COLS], int rows, int cols, char set);           //��ʼ������

void Displayboard(char board[ROWS][COLS], int row, int col);                    //��ӡ����

void Setmine(char mine[ROWS][COLS], int row, int col);                          //������

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);  //�Ų���

/* ���ڸĽ�
            1.�������������Χ8����û���� ���� 8����������Χ8�����׵ģ��Զ�չ��������ʾ��Χ�׵ĸ���(�ݹ�)
            2.���
*/

