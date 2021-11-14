/*时间：2021年7月23日10:26

  功能：
  
  目的：

  注意：return一次只能返回一个值   eg :return a, b;  error

*/
# include <stdio.h>

int f(void)                     //int表示函数返回到主函数的值是 int 类型    括号中的 void 表示该函数不能接收数据
{
	return 10;                  //return 10 终止 f 函数，向主调函数返回10
}

/*
void g()                    //g 前面的 void 表示函数没有返回值
{
	return;                    // 终止函数 
}
*/

/*
int u()
{
	return 10.5;            //函数的返回值类型与 return表达式 类型不一致时，以函数名前返回值类型为准
                            //所以这里返回值为 10
}                             
*/

int main(void)              //main代表主函数
{
	double j = 5;

	j = f();
	printf("%lf\n", j);

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------

 10.000000

---------------------------------
结论：
*/
