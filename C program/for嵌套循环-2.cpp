/*ʱ�䣺2021��7��18��23:10

  ���ܣ�
  
  Ŀ�ģ�

  ��ʽ��for (A; B; C)
            for (D; E; F)
			     ......
	
*/
# include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i=0; i<3; i++)           
        printf("�����\n");
	    for (j=2; j<5; j++)
			printf("��������\n");
	printf("������!\n");

	return 0;

}
/*
VC++6.0��������
---------------------------------
�����
�����
�����
��������
��������
��������
������!
---------------------------------
���ۣ�forĬ�Ͽ���һ�����
*/