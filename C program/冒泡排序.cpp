/*时间：2021年10月19日22:50

  功能：对数组内元素进行从小到大排列

  目的：

*/
# include <stdio.h>

void bubble_sort(int * a, int len)
{
//	int len = sizeof(a) / sizeof(a[0]);                    //error   len = 1此处sizeof(a)求的是指针变量a的大小   4/4=1
//	printf("len = %d\n", len);

	int i, j, t;

	for (i=0; i<len-1; ++i)
	{
		int flow = 0;
		for (j=0; j<len-1-i; ++j)
		{
			if (a[j] > a[j+1])                             //  >(升序)  ,  <(降序)
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flow = 1;
			}
		}
		if (1 == flow)                                     //若无需顺序无误，则退出循环
		{
			break;
		}
	}
}

int main(void)
{
	int arr[] = {-8, 1, 0, 6, 3, 8};

	int len = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, len);

	int n = 0;
	for (n=0; n<len; ++n)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");

	return 0;
}
/*
VC++6.0输出结果为：
------------------------

-8 0 1 3 6 8

------------------------
结论：
*/