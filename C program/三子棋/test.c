# include <stdio.h>
# include "game.h"

void menu()  //��ӡ�˵�
{
	printf("****************************\n");
	printf("********   1. play  ********\n");
	printf("********   0. exit  ********\n");
	printf("****************************\n");
}

void game()
{
	char board[ROW][COL];  //�����ά����(����)

	Initboard(board, ROW, COL); //��ʼ��(����)

	Displayboard(board, ROW, COL);  //��ӡ(����)

	char ret = 0;

	while (1)
	{
		PlayerMove(board, ROW, COL);   //�����
		Displayboard(board, ROW, COL);  //��ӡ(����)

		ret = IsWin(board, ROW, COL);   //�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);  //������
		Displayboard(board, ROW, COL);  //��ӡ(����)

		ret = IsWin(board, ROW, COL);   //�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else if (ret == 'D')
	{
		printf("ƽ�֣�\n");
	}
	Displayboard(board, ROW, COL);  //��ӡ(����)
}

int main(void)
{
	srand((unsigned int)time(NULL));       //���������

	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");

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
			printf("������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}