#define _CRT_SECURE_NO_WARNINGS 1
# include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------扫雷游戏--------\n\n");
	printf("%d  ", j);
	for (j = 1; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d  ", i);

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("--------扫雷游戏--------\n\n");
}

void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = BOMB;        //布置雷的数量

	while (count)
	{
		int x = rand() % row + 1;          //范围是1~9
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y]      +
			mine[x - 1][y - 1]  +
			mine[x][y - 1]      +
			mine[x + 1][y - 1]  +
			mine[x + 1][y]      +
			mine[x + 1][y + 1]  +
			mine[x][y + 1]      +
			mine[x - 1][y + 1]) - 8 * '0';
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (z < (row*col)-BOMB)
	{
		printf("请输入排查雷的坐标,中间用空格隔开：");

		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾你被炸死了！\n\n");
				Displayboard(mine, ROW, COL);     //打印布置雷棋盘
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';                 //统计 x,y 周围雷的个数

				Displayboard(show, ROW, COL);            //打印排查雷棋盘
				z++;
			}
		}
		else
		{
			printf("坐标不合法吗，请重新输入");
		}
	}
	if (z == (row * col) - BOMB)
	{
		printf("恭喜你，你赢了！\n");
		Displayboard(mine, ROW, COL);     //打印布置雷棋盘
	}
}



