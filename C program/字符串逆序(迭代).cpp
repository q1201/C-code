/*
  ʱ�䣺2021��10��12��22:12

  ���ܣ����Ŵ�ӡ������ַ���

  Ŀ�ģ�

*/
# include <stdio.h>

int my_strlen(char * str)
{
	int count = 0;
	
	while(*str != '\0')
	{
		count++;
		str++;
	}
//	printf("%d\n", count);
	return count;
}

void reverse(char * str)
{
	int left = 0;
	int right = my_strlen(str) - 1;
	
	while(left <= right)
	{
		char fun = str[left];
//		char fun = *(str + left);

		str[left] = str[right];
//		*(str + left) = *(str + right);

		str[right] = fun;
//      *(str + right) = fun;

		left++;
		right--;
	}	
}

int main(void)
{
	char arr[] = " 0 ";

	printf("��������Ҫ���õ��ַ�����");

	scanf("%s", arr);
	
	reverse(arr);
	
	printf("%s\n", arr);
}
/*
VC++6.0��������Ϊ��
--------------------------------



--------------------------------
*/