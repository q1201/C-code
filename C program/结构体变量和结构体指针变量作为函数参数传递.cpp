/* 
   ʱ�䣺2021.08.04 22��27

   ���ܣ�

   Ŀ�ģ�ͨ��������ɶԽṹ���������������

*/

# include <stdio.h>
# include <string.h>

struct infor
{
	int id;
	float high;
};

struct student
{
	struct infor mark;                                               //�ṹ���Ƕ��ʹ��
	int age;
	char sex;
	char name[100];
	float score;
};                                                                   //�ֺŲ���ʡ

void inputstudent(struct student *);
void outputstudent(struct student *);
//void outputstudent(struct student r);

int main(void)
{
	struct student st = {{1, 170.20f}, 20, 'f', "����", 99.9f};
	 printf("%d\n", sizeof(st));                                     //�ֽ�����120

	inputstudent(&st);                                               //�Խṹ���������  ���뷢��st�ĵ�ַ                 
	outputstudent(&st);      //��ַ����                                        
//  outputstudent(st);       //��ֵ����                              //�Խṹ��������  ���Է���st�ĵ�ַҲ����ֱ�ӷ���st������

	return 0;
}

/*
void outputstudent(struct student r)
{
    printf("%d, %f, %d, %s, %f, %c\n", r.mark.id, r.mark.high, r.age, r.name, r.score, r.sex);
}
*/

void inputstudent(struct student * p)                                //p ֻռ�ĸ��ֽ�
{
	p->mark.id = 9;
	p->mark.high = 77.2f;
	p->age = 18;
    strcpy(p->name, "����");                                         //����д�� p->name = "����";
	p->score = 88.8f;
	(*p).sex = 'm';
}

void outputstudent(struct student * q)
{
	printf("%d, %f, %d, %s, %f, %c\n", q->mark.id, q->mark.high, q->age, q->name, q->score, q->sex);
}

/* ��VC++6.0�е����н��Ϊ��
--------------------------------------


9, 77.199997, 18, ����, 88.800003, m


--------------------------------------
�ܽ᣺
*/