# include <stdio.h>

int run (int n)
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));         // &&(并且)：两个都为真才为真 ；||(或者)：一个为真就为真
	
/* 
                    (左)                         (右)

            能被4整除 且 不能被100整除  或者  能被400整除

             (成立)        (成立)               (成立)
					
            (两个都成立，整体才成立)

                         (左边整体成立 或 右边成立才为闰年)
*/
}

int main(void)
{
	int y = 0;
	
	for (y=1000; y<=2000; y++)
	{
		if (run (y) == 1)
		{
			printf("%d ", y);
		}
	}
	
	return 0;
}

/* 
   判断闰年的方法：        (左)                        (右)

                  能被4整除 且 不能被100整除  或者  能被400整除

                    (成立)      (成立)                (成立)
					
                  (两个都成立，整体才成立)

                         (左边整体成立 或 右边成立才为闰年)
*/