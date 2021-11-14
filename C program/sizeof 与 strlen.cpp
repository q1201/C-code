/*时间：2021年9月27日22:01

  功能：
  
  目的：测试sizeof 与 strlen的区别
	
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char str[] = {'w', 'e', 'l', 'c', 'o', 'm', 'e'};

	char arr[] = "welcome";

	char kill[100] = "welcome";

	char * pin = "123456789";

    char ret[100] = "0123456789";

	int shi[100] = { 0 };

	int a = sizeof(str);     //7

	int b  = sizeof(arr);    //8                           //arr[]是数组，计算到\0位置(包括\0)，因此是7+1

	int c = sizeof(*arr);    //1                           //*arr 是第一个字符,所以是1

	int d = strlen(arr);     //7                           //strlen计算字符串的长度，以结束符 '\0' 为字符串结束,但计算时不包括'\0'

    int e = strlen(kill);    //7                           //strlen计算字符串的长度不受定义时的长度控制

	int f = sizeof(pin);     //4                           //pin 是指向字符串常量的字符指针

    int g = sizeof(ret);     //100                         //sizeof 计算的则是分配的数组所占的内存空间的大小，不受里面存储的内容改变

	int h = sizeof(shi);     //400                         //此时数组名表示整个数组，计算的是整个数组的大小，单位是字节


	printf("a = %d\n", a);                                

	printf("b = %d\n", b);                                //参数必须是字符型指针（char*）, 且必须是以'\0'结尾的。

	printf("c = %d\n", c);

	printf("d = %d\n", d);

	printf("e = %d\n", e);

	printf("f = %d\n", f);

	printf("g = %d\n", g);

	printf("h = %d\n", h);


	return 0;

}

/*
在VC++6.0中的输出结果是:
------------------------------

a = 7
b = 8
c = 1
d = 7
e = 7
f = 4
g = 100
h = 400

-------------------------------
总结：     
              1.sizeof(...)是运算符，返回值时是符号整型,单位是字节

              2.strlen(...)是函数,要在运行时才能计算	
*/