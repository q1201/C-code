/*时间：2021年7月15日21:48

  功能：计算1到100之间奇数和、奇数个数、奇数的平均值

  目的：了解for if 嵌套

*/


# include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	int cnt = 0;                 //count的缩写
	float avg = 0;               //average的缩写
	
	for (i=1; i<101; ++i)
	{
		if (i%2 == 1)
		{
			sum += i;            //sum += i 等价于 sum = sum+i
			++cnt;               //等价于cnt + 1
		}
		else
        	avg = 1.0*sum/cnt;   
		
	} 

	printf("sum= %d\n", sum);
	printf("cnt = %d\n",cnt);
	printf("avg = %f\n",avg);
	
	return 0;
}
/*
VC++6.0输出结果：
-----------------------
sum= 2500

cnt = 50

avg = 50.000000

-----------------------
结论：

*/