/*ʱ�䣺2021��7��20��21:35

  ���ܣ���һԪ���η��̵ĸ�
  
  Ŀ�ģ��˽�do...whileѭ��������

  ��ʽ��do
        {
          ......

        }while (���ʽ);
	
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
		printf("������һԪ���η��̵�����ϵ����\n");		
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
			printf("�˷�����ʵ����\n");
		}
		printf("�Ƿ���Ҫ�������У���������Y��y, ��������������˳�");
		scanf(" %c", &ch);                                            //%cǰ����Ҫ�Ӹ��ո�
	}while ('y' == ch || 'Y' == ch);
	
	return 0;
}
/*
VC++6.0��������
---------------------------------


---------------------------------
���ۣ�
*/
