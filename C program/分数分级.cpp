/*ʱ�䣺2021��07��11��16��43

  ����:�Է�����������

  Ŀ��:�˽� if...else...if...else...�÷�

*/

# include <stdio.h>

int main()
{
	float score;
	printf("���������ķ�����");
	scanf("%f", &score);
	if (score>100)
	    printf("���ǲ����ܵģ�\n");
	else if (score>=90 && score<=100)
		printf("��ϲ�㣬��������ģ�\n");
	else if (score>=80 && score<90)
		printf("��ô�㻹����\n");
	else if (score>=60 && score<80)
		printf("�㼰���ˣ�\n");
	else if (score>=0 && score<60)
		printf("������˼����ҿ��ˣ�\n");
	else
		printf("����ô�Ա���\n");

	return 0;
}

/*
VC++6.0������
-----------------------


-----------------------

*/