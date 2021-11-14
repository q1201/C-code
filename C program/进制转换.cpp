/*
   时间：2021.07.02 22：41
   
   功能：
   
   目的：

*/
# include <stdio.h>

int main()
{
	int i = 0XFFFFFFFB; 
	
	printf("%d\n",i);


	int j = 1000;

	printf("%#X\n", j);                       //十六进制

	printf("%o\n",j);                         //八进制

	printf("%d\n",j);                         //十进制 

    char ch = 0x80;

	printf("%d\n", ch);

	return 0;
}
/*VC++6.0输出结果
------------------------

	0X3E8

	1750

	1000

------------------------
总结:
*/