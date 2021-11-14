# include <stdio.h>
# include "game.h"

void menu()  //打印菜单
{
	printf("****************************\n");
	printf("********   1. play  ********\n");
	printf("********   0. exit  ********\n");
	printf("****************************\n");
}

void game()
{
	char board[ROW][COL];  //定义二维数组(棋盘)

	Initboard(board, ROW, COL); //初始化(棋盘)

	Displayboard(board, ROW, COL);  //打印(棋盘)

	char ret = 0;

	while (1)
	{
		PlayerMove(board, ROW, COL);   //玩家走
		Displayboard(board, ROW, COL);  //打印(棋盘)

		ret = IsWin(board, ROW, COL);   //判断输赢
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);  //电脑走
		Displayboard(board, ROW, COL);  //打印(棋盘)

		ret = IsWin(board, ROW, COL);   //判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了！\n");
	}
	else if (ret == 'D')
	{
		printf("平局！\n");
	}
	Displayboard(board, ROW, COL);  //打印(棋盘)
}

int main(void)
{
	srand((unsigned int)time(NULL));       //生成随机数

	int input = 0;
	do
	{
		menu();
		printf("请选择：");

		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("OVER");
			break;
		default:
			printf("请重新选择：\n");
			break;
		}
	} while (input);

	return 0;
}