/*
  ʱ�䣺2021��9��15��21:07

  ���ܣ�
  
  Ŀ�ģ�
*/
# include <stdio.h>
# include <string.h>

int main(void)
{
	char ch[] = "abc";                                //���abc    ��"abc"-- 'a', 'b', 'c', '\0';char[]�ķ����в�������ɺ����ַ������Ⱦ���(������'\0')

	char qq[] = {'a', 'b', 'c'};                      //���abc�abc, һ������ռ�����ֽ�

	char sh[] = {'a', 'b', 'c', 0};                   //���abc, ��ASCII����'\0'-- 0 �� ��\0��ֵΪ0
 
	char zh[] = {'a', 'b', 'c', '\0'};                //���abc, '\0'�ַ���Ϊ������־



//	char sh[] = {'a', 'b', 'c', '0'};                 //���abc0

	printf("ch = %s, sh = %s, zh = %s, qq = %s\n", ch, sh, zh, qq);
	printf("\n\n");

	//strlen(string length) -- �����ַ����ĳ���
	printf("ch = %d\n", strlen(ch));                  //���ֵΪ 3
	printf("qq = %d\n", strlen(qq));                  //������ֵ��һֱ�������ҵ�'\0'Ϊֹ, �˱��������Ϊ7
	printf("zh = %d\n", strlen(zh));                  //���ֵΪ 3,'\0'���ַ���������־���ڼ����ַ�����ʱ���ᱻ������; ���ڼ�������Ԫ��ʱ������\0

	return 0;
}
/*
VC++6.0��������
---------------------------------

ch = abc, sh = abc, zh = abc, qq = abc�abc


ch = 3
qq = 7
zh = 3


---------------------------------
���ۣ�
*/

