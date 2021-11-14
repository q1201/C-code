/*
  时间：2021年9月15日21:07

  功能：
  
  目的：
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char ch[] = "abc";                                //输出abc    ，"abc"-- 'a', 'b', 'c', '\0';char[]的方框中不填，代表由后面字符串长度决定(不加上'\0')

	char qq[] = {'a', 'b', 'c'};                      //输出abc蘟bc, 一个汉字占两个字节

	char sh[] = {'a', 'b', 'c', 0};                   //输出abc, 在ASCII码中'\0'-- 0 ， 即\0的值为0
 
	char zh[] = {'a', 'b', 'c', '\0'};                //输出abc, '\0'字符串为结束标志



//	char sh[] = {'a', 'b', 'c', '0'};                 //输出abc0

	printf("ch = %s, sh = %s, zh = %s, qq = %s\n", ch, sh, zh, qq);
	printf("\n\n");

	//strlen(string length) -- 计算字符串的长度
	printf("ch = %d\n", strlen(ch));                  //输出值为 3
	printf("qq = %d\n", strlen(qq));                  //输出随机值，一直往后找找到'\0'为止, 此编译器输出为7
	printf("zh = %d\n", strlen(zh));                  //输出值为 3,'\0'是字符串结束标志，在计算字符长度时不会被算在内; 而在计算数组元素时会算上\0

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

ch = abc, sh = abc, zh = abc, qq = abc蘟bc


ch = 3
qq = 7
zh = 3


---------------------------------
结论：
*/

