/*时间：2021年7月17日22:56

  功能：解出一元二次方程的根

  目的：

*/
# include <stdio.h>
# include <math.h>

int main()
{
	float a, b, c;
	double delta;                                    //delta存放的是 b*b - 4*a*c
	double x1;                                      
	double x2;
	
	printf("请输入a b c 的数据，中间用空格隔开：");
	scanf("%f %f %f",&a, &b, &c);                   //整型int用%d, 单精度float用%f， 双精度double用%lf

	delta = b*b - 4*a*c;
	
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);              //sqrt是求平方根的函数
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("x1 = %f, x2 = %f\n", x1, x2);
	}	
    else if (delta == 0)
	{
		x1 = (-b) / (2*a);
		x2 = x1;                                      //表示把x1赋给x2
		printf("x1 = x2 = %f\n", x1);
	}
	else
	
		printf("无解\n");
	
	return 0;
}
/*VC++6.0输出结果：
----------------------------



----------------------------
结论：
*/