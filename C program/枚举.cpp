/*时间：2021年7月18日23:28

  功能：
  
  目的：

  优点：代码更安全

  格式：enum 枚举名                                                             
        {
		    成员列表
        };
	
*/
# include <stdio.h>

enum weekDay                                                                 //emum(枚举)：把一个事物所有可能的取值一一列举出来
{
	MonDay = 6, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay       //赋初值：默认从零开始，也可赋值 Monday = 6；即从六开始
};

int main(void)
{
	Monday = 3                                                               //error , 枚举常量不可更改                                                 

	enum weekDay day = MonDay;                                               /*
	                                                                            enmm weekDay 为数据类型， day为变量名， 被enmm weekDay
																		        定义之后day只能接收枚举所列举的内容
																		     */

	printf("%d\n", day);

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

0

---------------------------------
结论：
*/