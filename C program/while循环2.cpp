# include <stdio.h>

int main(void)
{
	char password [20] = { 0 };

	printf("���������룺");

	scanf("%s", password);                            //���������Ϊ�����һ��Ԫ�صĵ�ַ

	printf("��ȷ������Y/N��");

//	getchar ();                                       //�����ֻ������������һ���ַ�

	int tmp = 0;

	while (tmp = getchar() != '\n')                   //���������еĶ���ַ�
	{
		;                                             //�����
	}

	int ch = getchar ();

	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
		printf("�������\n");

	return 0;
}