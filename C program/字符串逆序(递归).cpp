/*
  时间：2021年10月15日22:01

  功能：

  目的：熟练递归的思想

*/
# include <stdio.h>

int my_strlen(char* arr)
{
	int count = 0;
	
	while (*arr != 0)
	{
		count++;
		arr++;
	}
	//	printf("count = %d\n", count);
	return count;
}

void reverse_print(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);

	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	
	if (my_strlen(str+1) >= 2)
	{
		reverse_print(str+1);
	}

	*(str + len - 1) = tmp;                 //每次提递归都会创建一个tmp
	
}

int main()
{
	char arr[] = " 0 ";

	printf("请输入字符串：");

	scanf("%s", arr);
	
	reverse_print(arr);
	
	printf("%s\n", arr);
	
	return 0;
}
/*
VC++6.0的输出结果为：
--------------------------------



--------------------------------
*/