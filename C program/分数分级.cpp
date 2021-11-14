/*时间：2021年07月11日16：43

  功能:对分数进行评级

  目的:了解 if...else...if...else...用法

*/

# include <stdio.h>

int main()
{
	float score;
	printf("请输入您的分数：");
	scanf("%f", &score);
	if (score>100)
	    printf("这是不可能的！\n");
	else if (score>=90 && score<=100)
		printf("恭喜你，你是优秀的！\n");
	else if (score>=80 && score<90)
		printf("那么你还不错！\n");
	else if (score>=60 && score<80)
		printf("你及格了！\n");
	else if (score>=0 && score<60)
		printf("不好意思，你挂科了！\n");
	else
		printf("别这么自卑！\n");

	return 0;
}

/*
VC++6.0输出结果
-----------------------


-----------------------

*/