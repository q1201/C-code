/*
  ʱ�䣺2021��10��15��22:01

  ���ܣ�

  Ŀ�ģ������ݹ��˼��

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

	*(str + len - 1) = tmp;                 //ÿ����ݹ鶼�ᴴ��һ��tmp
	
}

int main()
{
	char arr[] = " 0 ";

	printf("�������ַ�����");

	scanf("%s", arr);
	
	reverse_print(arr);
	
	printf("%s\n", arr);
	
	return 0;
}
/*
VC++6.0��������Ϊ��
--------------------------------



--------------------------------
*/