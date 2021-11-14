
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
	//任何数对100取余都在0-99之间，然后+1， 范围就是0-100之间
	int num = rand() % 100+1;                                   //rand(随机数发生器)格式:int rand(void);

	int guess = 0;

	while (1)
	{
		printf("请猜数字：");

		scanf("%d", &guess);

		if (guess < num)
		{
			printf("猜小了!\n\n");
		}
		else if (guess > num)
		{
			printf("猜大了!\n\n");
		}
		else
		{
			printf("恭喜你，猜对了!\n");
			break;
		}
	}	
}

int main(void)
{
	int input = 0;
                                                                //time函数可以获取当前的系统时间但获取的是秒数, 格式为: time_t time(time_t * timer),time_t是long int
	srand((unsigned int) time(NULL));                           //srand(初始化随机数发生器)格式:void srand(unsigned int seed);seed必须为整数 
	
	do
	{
		menu();                                                 //定义菜单
		
		printf("请选择:");
		
		scanf("%d", &input);

		switch (input)
		{
		case (1):
			game();
			break;
			
		case (0):
			printf("退出游戏\n");
			break;
			
		default:
			printf("输错了，请重新输入：\n");
			break;
		}
		printf("\n");
		
	}while(input);                                              //1为真，再次执行循环；0为假，则退出循环
	
	return 0;
}

//结论：头文件都为 stdlib.h；当srand()的参数值固定的时候，rand()获得的数也是固定的；为了防止随机数每次重复，常常使用系统时间来初始化

/*
  注：   
      要取得[a,b)的随机整数，使用(rand() % (b-a)) + a       (结果值含a不含b)

      要取得[a,b]的随机整数，使用(rand() % (b-a+1)) + a     (结果值含a和b)

      要取得(a,b]的随机整数，使用(rand() % (b-a)) + a + 1   (结果值不含a含b)
*/