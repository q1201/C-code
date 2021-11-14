
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void menu()
{
	printf("************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
}

void game()
{	
	//�κ�����100ȡ�඼��0-99֮�䣬Ȼ��+1�� ��Χ����0-100֮��
	int num = rand() % 100+1;                                   //rand(�����������)��ʽ:int rand(void);

	int guess = 0;

	while (1)
	{
		printf("������֣�");

		scanf("%d", &guess);

		if (guess < num)
		{
			printf("��С��!\n\n");
		}
		else if (guess > num)
		{
			printf("�´���!\n\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���!\n");
			break;
		}
	}	
}

int main(void)
{
	int input = 0;
                                                                //time�������Ի�ȡ��ǰ��ϵͳʱ�䵫��ȡ��������, ��ʽΪ: time_t time(time_t * timer),time_t��long int
	srand((unsigned int) time(NULL));                           //srand(��ʼ�������������)��ʽ:void srand(unsigned int seed);seed����Ϊ���� 
	
	do
	{
		menu();                                                 //����˵�
		
		printf("��ѡ��:");
		
		scanf("%d", &input);

		switch (input)
		{
		case (1):
			game();
			break;
			
		case (0):
			printf("�˳���Ϸ\n");
			break;
			
		default:
			printf("����ˣ����������룺\n");
			break;
		}
		printf("\n");
		
	}while(input);                                              //1Ϊ�棬�ٴ�ִ��ѭ����0Ϊ�٣����˳�ѭ��
	
	return 0;
}

//���ۣ�ͷ�ļ���Ϊ stdlib.h����srand()�Ĳ���ֵ�̶���ʱ��rand()��õ���Ҳ�ǹ̶��ģ�Ϊ�˷�ֹ�����ÿ���ظ�������ʹ��ϵͳʱ������ʼ��

/*
  ע��   
      Ҫȡ��[a,b)�����������ʹ��(rand() % (b-a)) + a       (���ֵ��a����b)

      Ҫȡ��[a,b]�����������ʹ��(rand() % (b-a+1)) + a     (���ֵ��a��b)

      Ҫȡ��(a,b]�����������ʹ��(rand() % (b-a)) + a + 1   (���ֵ����a��b)
*/