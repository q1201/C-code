/*
   ʱ�䣺2021.07.02 22��41
   
   ���ܣ�
   
   Ŀ�ģ�

*/
# include <stdio.h>

int main()
{
	int i = 0XFFFFFFFB; 
	
	printf("%d\n",i);


	int j = 1000;

	printf("%#X\n", j);                       //ʮ������

	printf("%o\n",j);                         //�˽���

	printf("%d\n",j);                         //ʮ���� 

    char ch = 0x80;

	printf("%d\n", ch);

	return 0;
}
/*VC++6.0������
------------------------

	0X3E8

	1750

	1000

------------------------
�ܽ�:
*/