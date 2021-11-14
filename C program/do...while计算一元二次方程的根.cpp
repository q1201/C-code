/*时间：2021年7月20日21:35

  功能：求一元二次方程的根
  
  目的：了解do...while循环的流程

  格式：do
        {
          ......

        }while (表达式);
	
*/
# include <stdio.h>
# include <math.h>

int main(void)
{
	double a, b, c;
	double x1, x2;
	double delta;
    char ch;
	
	do
	{
		printf("请输入一元二次方程的三个系数：\n");		
		printf("a = ");
		scanf("%lf", &a);
		
		printf("b = ");
		scanf("%lf", &b);
		
		printf("c = ");
		scanf("%lf", &c);
		
		delta = b*b - 4*a*c;
		
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2*a);
			x2 = (-b - sqrt(delta)) / (2*a);
			printf("x1 = %lf, x2 = %lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = (-b) / (2*a);
			x2 = x1;
			printf("x1 = x2 = %lf\n", x1, x2);
		}
		else
		{
			printf("此方程无实数解\n");
		}
		printf("是否需要继续进行，是请输入Y或y, 输入其余任意键退出");
		scanf(" %c", &ch);                                            //%c前面需要加个空格
	}while ('y' == ch || 'Y' == ch);
	
	return 0;
}
/*
VC++6.0输出结果：
---------------------------------


---------------------------------
结论：
*/
