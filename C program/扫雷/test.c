#define _CRT_SECURE_NO_WARNINGS 1

# include "game.h"
# include <stdlib.h>
# include <time.h>

void menu()
{
	printf("***********************************\n");
	printf("**********    1. paly    **********\n");
	printf("**********    0. exit    **********\n"); 
    printf("***********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };     //存放布置好雷的信息
	char show[ROWS][COLS] = { 0 };     //存放排查出雷的信息

	Initboard(mine, ROWS, COLS, '0');  //初始化布置雷棋盘
	Initboard(show, ROWS, COLS, '*');  //初始化排查出雷棋盘

	Displayboard(show, ROW, COL);      //打印排查雷棋盘

	Setmine(mine, ROW, COL);           //布置雷
	//Displayboard(mine, ROW, COL);    //打印布置雷棋盘

	Findmine(mine, show, ROW, COL);    //排查雷
}

int main()
{
	srand((unsigned int)time(NULL));   //srand(unsigned int seed)头文件 stdlib.h    time()头文件 time.h

	int input = 0;
	do
	{
		menu();

		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case (1):
			game();
			break;
		case (0):
			printf("OVER\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
		}
	} while (input);

	return 0;
}