#pragma once
# include <stdio.h>

#define BOMB 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void Initboard(char board[ROWS][COLS], int rows, int cols, char set);           //初始化棋盘

void Displayboard(char board[ROWS][COLS], int row, int col);                    //打印棋盘

void Setmine(char mine[ROWS][COLS], int row, int col);                          //布置雷

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);  //排查雷

/* 关于改进
            1.如果本身不是且周围8格内没有雷 而且 8格内又有周围8格不是雷的，自动展开，并显示周围雷的个数(递归)
            2.标记
*/

