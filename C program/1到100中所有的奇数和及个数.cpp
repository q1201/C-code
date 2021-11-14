/*  
  时间：2021年9月22日21:49

  功能：
  
  目的：熟悉for if 嵌套
	
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
/*VC++6.0输出结果为：
---------------------------
2500
---------------------------
结论：
*/
