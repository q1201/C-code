/*ʱ�䣺2021��9��27��21:14

  ���ܣ�
  
  Ŀ�ģ�
		  
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char password [20] = "0";	
	int i = 0;

	printf("���������룺");
	
	for (i=0; i<3; ++i)
	{	
		scanf("%s", password);
		
		if (strcmp(password, "66666666") == 0 )                      //strcmp�������ַ������бȽ�(�ַ������������ַ�������),ʵ�����Ƕ��ַ���ASCII����бȽ�
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
		    printf("����������������룺");
		}
	}
	
	if (3 == i)
	{
		printf("������󣬼����˳�");
	}
	
	return 0;
}
/*
VC++6.0��������
---------------------------------

  
---------------------------------
���ۣ�������ʽ��int strcmp(const char* str1, const char* str2),str1��str2�������ַ������������ַ�������������ֵΪ����

	  ���ؽ�����¹涨��
						�� str1 < str2�����ظ�ֵ����-1(VC++����-1)
						
						�� str1 == str2������0 

						�� str1 > str2��������ֵ����1(VC++����10


*/
