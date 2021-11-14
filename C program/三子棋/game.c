//# include <stdio.h>
# include "game.h"    //头文件的包含

void Initboard(char board[][COL], int row, int col)  //二维数组行可省，列不可省
{
	int i = 0;
	int j = 0;

	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			board[i][j] = ' ';
			//printf("%c\n", board);
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);

			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
			
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}	
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("玩家下\n");
	printf("请输入坐标：");

	while (1)
	{
		scanf("%d %d", &x, &y);

		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入：");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下：\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)       //判断棋盘是否满了
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ');
			{
				return 0;                //棋盘没满
			}
		}
	}
	return 1;         //棋盘满了
}

char IsWin(char board[ROW][COL], int row, int col)        //判断输赢
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)                              //判断三行
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (j = 0; j < col; j++)                              //判断三列
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')  //判断斜线
	{
		return board[1][1];
	}
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')  //判断斜线
	{
		return board[0][2];
	}

	int ret = IsFull(board, row, col);      //判断棋盘是否满了
	if (ret == 1)
	{
		return 'D';
	}	
    return 'C';
}



