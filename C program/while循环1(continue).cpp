/*时间：2021年7月18日23:00

  功能：
  
  目的：
	
*/
# include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 10)
	{
		if (8 == i)
		{
			break;                               //while循环中，break用于永久终止循环
		}
		printf("%d ", i);
		i++;
	}

	printf("\n\n");

	int t = 1;

	while (t <= 10)
	{
		if (5 == t)
		{
			continue;                            //while循环中，continue作用是跳过本次循环continue后面的代码，直接去到判断部分，看是否进行下一次循环        
		}
		printf("%d ", t);
		t++;
	}

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

1 2 3 4 5 6 7

1 2 3 4

---------------------------------
结论：
*/