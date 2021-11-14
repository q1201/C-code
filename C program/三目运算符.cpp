/*时间：2021年7月18日22:20

  功能：
  
  目的：

  格式：(A ? B : C)     //若表达式A成立，结果为表达式B的计算结果； 若表达式A不成立，结果则为表达式C的计算结果
	
*/
# include <stdio.h>

int main(void)
{
	int i;
/*	int i = 6;
	int j = 3;
	int k = 8;
	int l = 1;
*/

	i = (6>3 ? 8 : 1);

/*  等价于
        if (i>j)
	       printf("%d\n",k);
	   else
	       printf("%d\n",l);
*/
	printf("i = %d\n",i);

	return 0;
}
/*
VC++6.0输出结果：
-----------------
       8
-----------------
结论：
*/