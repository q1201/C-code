/*ʱ�䣺2021��8��02��23:09

  ���ܣ�
  
  Ŀ�ģ�

  ��ʽ��struct �ṹ����
       {

	      ��Ա�б�

       }������,��������         ��ʱ�����ı���Ϊȫ�ֱ���
       int main()
	   {
	       struct �ṹ���� ������ = {�����б�};    ��ʱ�����ı���Ϊ�ֲ�����
	   }

��
       struct �ṹ���� 
       {

	      ��Ա�б�                             

       }��������	        ��ʱ�����ı���Ϊȫ�ֱ��� ���������
*/
# include <stdio.h>

struct student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
/*
	struct student st = {30, 99.9f, 'a'};
	struct student * mate = &st ;                       

	st.age = 88;
	mate->score = 88.8f;                                       //mate->score�ڼ�����ڲ���ת��λ(*mate).score ������ (*mate).score �ȼ��� st.score 
	mate->sex = 'g';                                           //mate->sex������mate��ָ����Ǹ��ṹ��� sex �����Ա

	printf("%d, %f, %C\n", (*mate).age, st.score, (*mate).sex);
*/


/*
	struct student room;

	room.age = 55;
	room.score = 55.5f;                                        //55.5Ĭ����double���ͣ����ϣ��һ��ʵ����float���ͣ��������ĩβ��f��F�����55.5f��55.4F��float����
	room.sex = 'f';

	printf("%d, %f, %c\n", room.age, room.score, room.sex);
*/


/*
    struct student st = {30, 99.9F, 'a'};
	st.age = 77;
	st.score = 77.7f;
	st.sex = 'b';

	printf("%d, %f, %c\n", st.age, st.score, st.sex);
*/

	return 0;
}
/*
VC++6.0��������
---------------------------------

88, 88.800003, g

55, 55.500000, f

77, 77.699997, b

---------------------------------
���ۣ�
*/