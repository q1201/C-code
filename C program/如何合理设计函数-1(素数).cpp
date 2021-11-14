/*时间：2021年7月24日23:07

  功能：判断1到某个范围内的素数
  
  目的：

*/
# include <stdio.h>

int main(void)
{
	int val;
	int i;
	int j;
	
	scanf("%d", &val);
	
	for (i=2; i<=val; ++i)
	{
		for (j=2; j<i; ++j)            //退出内部for循环，重新++i执行完外部for循环后，内部for循环重新以j=2开始，而不是以上一次循环得到的j结果开始																			
		{
			if (0 == i%j)
				break;
		}
		if (i == j)
			printf("%d\n", i);
	}
	return 0;
}
/*
VC++6.0输出结果：
---------------------------------


---------------------------------
结论：
*/
