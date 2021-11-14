/*
  时间：2021年11月10日21:20

  功能：
  
  目的：	
*/
# include <stdio.h>

int my_strlen(char * art)
{
	char * start = art;

	while (*art != '\0')
	{
		art++;
	}
	return art - start;
}

int main()
{
	//1.指针加减(+ -)整数
	float a[5];
	float * p;

	for (p = &a[0]; p < &a[5];)  //指针的关系运算
	{
		*p++ = 0;               //指针加减(+ -)整数
	}


    //2.指针减(-)指针(前提是两个指针指向同一个空间); 指针加(+)指针无意义
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	char str[] = "welcome";

//	printf("%d\n", arr[9] - str[0]);        //error

	printf("%d\n", arr[9] - arr[0]);        //指针减(-)指针,结果为 指针之间元素的个数


	//指针相减应用
	int len = my_strlen("abc");             //传首元素的地址，即a的地址

	printf("len = %d\n", len);


	//3.指针的关系运算
	//a.C语言标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的内存位置的指针比较
	int b[5];
	int * pi;

	for (pi=&b[5]; pi>&b[0];)
	{
		*--pi = 0;
	}

	//b.C语言标准规定：不允许指向数组元素的指针与指向数组第一个元素之前的内存位置的指针比较
	int c[5];
	int * pu;

	for (pu=&b[5-1]; pi>=&c[0]; pu--)
	{
		*pu = 0;
	}

	return 0;
}
/*
在VC++6.0中的输出结果是:
------------------------------

-------------------------------
总结：     
*/             
