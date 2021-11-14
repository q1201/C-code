# include <stdio.h>

void g(int * pArr, int len)                      
{
	pArr[1] = 88;                                          
//	*(pArr+1) = 88;                   

	return;
}

void f(int * pArr, int len)                          //被调函数需要接收 地址与长度
{
	int i;

	for (i=0; i<len; ++i)
	{
		printf("*(pArr+i) = %d\n", *(pArr+i));       //*(pArr+i) 等价于 pArr[i]  

//      printf("pArr[i] = %d\n", pArr[i]);
	}
	printf("\n");

	return;
}

int main(void)
{
	int a[3] = {6,8,9};
	int b[5] = {1,2,3,4,5};
	int c[6] = {9,8,7,5,4,6};

	f(a, 3);                             //a表示a数组第一个元素的地址
	f(b, 5);

	printf("c[1] = %d\n", c[1]);
	printf("\n");

	g(c, 6);

	printf("c[1] = %d\n", c[1]);                //pArr[i] 等价于 c[i]

	return 0;
}
/*
在VC++6.0中的输出结果为：
------------------------------
*(pArr+i) = 6
*(pArr+i) = 8
*(pArr+i) = 9

*(pArr+i) = 1
*(pArr+i) = 2
*(pArr+i) = 3
*(pArr+i) = 4
*(pArr+i) = 5

c[1] = 8

c[1] = 88
------------------------------
结论：pArr[i] 等价于 *(pArr+i) 等价于 *(a+i) 等价于 a[i] ，代表着同样一个变量
*/