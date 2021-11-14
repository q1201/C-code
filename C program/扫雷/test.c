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
	char mine[ROWS][COLS] = { 0 };     //��Ų��ú��׵���Ϣ
	char show[ROWS][COLS] = { 0 };     //����Ų���׵���Ϣ

	Initboard(mine, ROWS, COLS, '0');  //��ʼ������������
	Initboard(show, ROWS, COLS, '*');  //��ʼ���Ų��������

	Displayboard(show, ROW, COL);      //��ӡ�Ų�������

	Setmine(mine, ROW, COL);           //������
	//Displayboard(mine, ROW, COL);    //��ӡ����������

	Findmine(mine, show, ROW, COL);    //�Ų���
}

int main()
{
	srand((unsigned int)time(NULL));   //srand(unsigned int seed)ͷ�ļ� stdlib.h    time()ͷ�ļ� time.h

	int input = 0;
	do
	{
		menu();

		printf("��ѡ��");
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
			printf("������������������\n");
		}
	} while (input);

	return 0;
}