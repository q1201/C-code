/*
  ʱ�䣺2021��8��10��22:35

  ���ܣ���ѧ����Ϣ���ɼ���������
  
  Ŀ�ģ�

*/
# include <stdio.h>
# include <malloc.h>

//�ṹ��
struct student
{
	char name[100];
	int age;
	float score;
};

int main(void)
{
	int i, j;
	struct student t;
	int len;
	struct student * p;

	printf("������ѧ������Ϣ:");
	printf("len = ");
	scanf("%d", &len);                                               
	p = (struct student * )malloc(len * sizeof(struct student));     

/*
   17-23�ж�̬�Ĺ�����һ��һά���飬��������p������ĳ�����len, malloc(len * sizeof(struct student))�ķ���ֵΪ��һ���ֽڵĵ�ַ;
   (struct student *)��ʾ�ѷ���ֵΪ��һ���ֽڵĵ�ַ���ṹ������(struct student)�����֣�����(len * sizeof(struct student))�����
   ÿ��Ԫ�ض��ǽṹ�����͡� 
*/

	for (i=0; i<len; ++i)
	{
		printf("�������%d��ѧ������Ϣ:\n", i+1);

		printf("name = ");
		scanf("%s", p[i].name);                                      //name����������������Ѿ���������Ԫ�صĵ�ַ, ����p[i].name ���ܸĳ� &p[i].name

		printf("age = ");
		scanf("%d", &p[i].age);

		printf("score = ");
		scanf("%f", &p[i].score);


		printf("\n\n");                                              //������
	}
//ð���㷨
	for (i=0; i<len-1; ++i)
	{
		for (j=0; j<len-1; ++j)
		{
			if (p[j].score > p[j+1].score)                           // >(����)  ,  <(����)     
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
	}

	printf("\n\nѧ������Ϣ�ǣ�\n");                                  // \n\n��ʾ������

	for (i=0; i<len; ++i)
	{
		printf("��%d��ѧ������Ϣ�ǣ�\n", i+1);

		printf("name = %s\n", p[i].name);
		printf("age = %d\n", p[i].age);
		printf("score = %f\n\n", p[i].score);
	}

	return 0;
}
/*
VC++6.0��������
---------------------------------



---------------------------------
���ۣ�
*/
