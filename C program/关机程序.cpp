# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(void)
{
	char name [20] = { 0 };
	
	system ("shutdown -s -t 60");                                    //shutdown -s (�ػ�) -t 60 (ʱ��Ϊ60��)
 	
	while (1)
	{
		printf("���ĵ��Խ���һ���Ӻ�ػ��������롰������ȡ���� ");

		scanf("%s", name);

		if (strcmp(name, "������") == 0)
		{
			system ("shutdown -a");                                  //shutdown -a (ȡ���ػ�)�� system() ִ��ϵͳ����ĺ�����ͷ�ļ�Ϊstdlib.h
			break;
		}
		printf("\n");
	}	
		return 0;
}	