/*
  时间：2021年07月25日22:15

  功能：求1到某个数字之间(包括该数字)所有的素数，并将其输出
	      
  目的：用1个函数来判断一个数字是否是素数
	
  缺点：
		可重用性仍然不是非常高，
		比如有1000个数字，求它们每个数字从1到它本身的素数
		则
				for (i=2; i<=val; ++i)
				{
					if ( IsPrime(i) )
						printf("%d\n", i);
				}
		要写1000次

*/

# include <stdio.h>

bool IsPrime(int m)
{
	int i;
		
	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;

}

int main(void)
{
	int val;
	int i;
 
	scanf("%d", &val);
	for (i=2; i<=val; ++i)
	{
		if ( IsPrime(i) )
			printf("%d\n", i);
	}

	return 0;
}
/*
VC++6.0输出结果为：
------------------------


------------------------
结论：
*/