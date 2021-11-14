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
	printf("--------ɨ����Ϸ--------\n\n");
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

	printf("--------ɨ����Ϸ--------\n\n");
}

void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = BOMB;        //�����׵�����

	while (count)
	{
		int x = rand() % row + 1;          //��Χ��1~9
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
		printf("�������Ų��׵�����,�м��ÿո������");

		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź��㱻ը���ˣ�\n\n");
				Displayboard(mine, ROW, COL);     //��ӡ����������
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';                 //ͳ�� x,y ��Χ�׵ĸ���

				Displayboard(show, ROW, COL);            //��ӡ�Ų�������
				z++;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������");
		}
	}
	if (z == (row * col) - BOMB)
	{
		printf("��ϲ�㣬��Ӯ�ˣ�\n");
		Displayboard(mine, ROW, COL);     //��ӡ����������
	}
}



