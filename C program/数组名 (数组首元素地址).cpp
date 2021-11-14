# include <stdio.h>

int main()
{
	int arr[10] = { 0 };

//	printf("%p\n", &arr[0]);                         // 0019FF08

	printf("len = %d\n", sizeof(arr));


	printf("%p\n", arr);          //数组首元素的地址    0019FF08         
	                                                                 //相差4个字节
	printf("%p\n", arr+1);        //第二个元素的地址    0019FF0C

	printf("%p\n", &arr);         //数组的地址          0019FF08 
	                                                                 //相差40个字节
	printf("%p\n", &arr+1);       //整个数组后的地址    0019FF30


	return 0;
}
/*
VC++6.0输出结果为：
------------------------

len = 40
0019FF08
0019FF0C
0019FF08
0019FF30


------------------------
结论：
*/