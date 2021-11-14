//递归

# include <stdio.h>

int my_strlen(char * str)
{


//	if (*str != '0')                                       //error

//	if (*str != 0)
	if (*str != '\0')
	{
		return 1 + my_strlen(1+str);                       //在不创建临时变量的情况下求字符串长度
	}
	else
	{
		return 0;
	}

/*
	int count = 0;                                         //创建临时变量求字符串长度

	while (*str != 0)
	{
		count++;
		str++;
	}
	return count;
*/

}

int main(void)
{
	printf("请输入字符串：");

	char arr[] = "0";

	scanf("%s", arr);

	printf("字符串长度为：%d\n", my_strlen(arr));

//	printf("%s\n", arr);


	return 0;
}