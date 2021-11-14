/*
  时间：2021年10月08日22:36

  功能：
  
  目的：	
*/
# include <stdio.h>

int main(void)
{
	int arr[] = {-8, 56, 59, 1245, 153, -468, 4, 453, 45, 54};
	int i = 0;

	int max = arr[0];                                                //先与数组中的某一个比较
//	int max = 0;                                                     //error, 若存在负数就无法实现

	for (i=0; i<10; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);

	return 0;
}
/*
VC++6.0输出结果：
----------------------------

max = 1245

----------------------------
结论：
*/