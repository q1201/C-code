/*ʱ�䣺2021��7��18��23:28

  ���ܣ�
  
  Ŀ�ģ�

  �ŵ㣺�������ȫ

  ��ʽ��enum ö����                                                             
        {
		    ��Ա�б�
        };
	
*/
# include <stdio.h>

enum weekDay                                                                 //emum(ö��)����һ���������п��ܵ�ȡֵһһ�оٳ���
{
	MonDay = 6, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay       //����ֵ��Ĭ�ϴ��㿪ʼ��Ҳ�ɸ�ֵ Monday = 6����������ʼ
};

int main(void)
{
	Monday = 3                                                               //error , ö�ٳ������ɸ���                                                 

	enum weekDay day = MonDay;                                               /*
	                                                                            enmm weekDay Ϊ�������ͣ� dayΪ�������� ��enmm weekDay
																		        ����֮��dayֻ�ܽ���ö�����оٵ�����
																		     */

	printf("%d\n", day);

	return 0;
}
/*
VC++6.0��������
---------------------------------

0

---------------------------------
���ۣ�
*/