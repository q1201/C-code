//�ݹ�

# include <stdio.h>

int my_strlen(char * str)
{


//	if (*str != '0')                                       //error

//	if (*str != 0)
	if (*str != '\0')
	{
		return 1 + my_strlen(1+str);                       //�ڲ�������ʱ��������������ַ�������
	}
	else
	{
		return 0;
	}

/*
	int count = 0;                                         //������ʱ�������ַ�������

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
	printf("�������ַ�����");

	char arr[] = "0";

	scanf("%s", arr);

	printf("�ַ�������Ϊ��%d\n", my_strlen(arr));

//	printf("%s\n", arr);


	return 0;
}