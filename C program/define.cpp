/*时间：2021年9月21日23:00

  功能：定义常量和宏(define属于预处理指令)

  目的：

*/
# include <stdio.h>

#define MAX 1000                               //define定义符号(标识符常量) 

#define add(X, Y) ((X)+(Y))                    //define定义宏

int main(void)
{
	printf("MAX = %d\n", MAX);

	printf("%d\n", 4*add(6, 8));

	return 0;
}
/*VC++6.0输出结果为：
------------------------

MAX = 1000
56

------------------------
结论：
*/