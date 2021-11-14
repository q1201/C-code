/*时间：2021年7月21日17:20

  功能：
  
  目的：了解switch的流程及break的功能
	
  格式：switch (整型表达式)
		{	
		case 整型常量表达式；
		     语句；
		}	  
*/
# include <stdio.h>

int main()
{
	int val;
	char ch;

//	char a;

//	int n;
	
	do
	{
		scanf("%d", &val);
		
		switch (val)
		{
//		case n:                                   //error

//		case 1.0:                                 //error

//		case 1+0:                                 //right

//		case a:                                   //right, 字符属于整型的一种(本质上是以ASCII码值存储的)

		case (1):
			printf("一层到了!\n");
			break;                                //在switch循环中，用于终止自己所在的switch
		case (2):
			printf("二层到了!\n");
			break;
		case (3):
			printf("三层到了!\n");
			break;
		default:                                  //defaul子句的顺序无所谓(可前可后)，当switch表达式的值并不匹配所有的case标签时，执行default子句                         
			printf("无该层!\n");
			break;
		}
//		break;                                    //在循环中，用于终止循环   
		printf("输入y或Y继续，否则退出\n");
		scanf(" %c",&ch);
	}while('y' == ch || 'Y' == ch);
	
	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

  
---------------------------------
结论：break在多层循环中，只能终止与它最近的循环，break并非必须有，由需求决定；switch允许嵌套使用
*/
