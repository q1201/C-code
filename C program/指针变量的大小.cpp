# include <stdio.h>

void ball (int arr[])              //本质上是(int * arr); 在64位系统（即x64)中，指针变量的大小占8字节；在32位系统（即x86)中，指针变量的大小占4字节
{
	int n = sizeof(arr);
		printf("n = %d\n", n);
}

int main(void)
{
	int arr[] = { 1 };

	ball(arr);

	int m = sizeof(arr);
	printf("m = %d\n", m);

	return 0;
}
/*
在VC++6.0的输出结果为：
-------------------------------

n = 4
m = 4

-------------------------------
*/