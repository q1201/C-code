/*  
  ʱ�䣺2021��9��22��21:49

  ���ܣ�
  
  Ŀ�ģ���Ϥfor if Ƕ��
	
*/
# include <stdio.h>

int main()
{

	int i;
	int sum = 0;
	
	for (i=1; i<=100; ++i)
	{
		if (i%2 != 0)
			sum = sum + i;
	}
	
	printf("sum = %d\n",sum);


/*
	int i = 0;

	for (i=1; i<=100; i+=2)
	{
		printf("%d ", i);
	}

	printf("\n\n");
*/

	return 0;
}
/*VC++6.0������Ϊ��
---------------------------
2500
---------------------------
���ۣ�
*/
