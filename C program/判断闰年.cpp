# include <stdio.h>

int main(void)
{
	int year = 0;
	int m, n = 0;
	int num = 0;

	printf("请输入年份区间：");

	scanf("%d %d", &m, &n);

	printf("\n");

	for (year=m; year<=n; ++year)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))        // &&(并且)：两个都为真才为真 ；||(或者)：一个为真就为真    
		{
			printf("%d ", year);
			num++;                                                             // num = num + 1;
		}
	}
	printf("\nnum = %d\n", num);

	return 0;
}

/* 
   判断闰年的方法：        (左)                        (右)

                  能被4整除 且 不能被100整除  或者  能被400整除

                    (成立)      (成立)                (成立)
					
                  (两个都成立，整体才成立)

                         (左边整体成立 或 右边成立才为闰年)
*/