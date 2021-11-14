# include <stdio.h>
# include <malloc.h>

void f(struct student * q, int le)
{
	int i;
	
	for (i=0; i<le; ++i)
	{
		printf("请输入第%d个学生的信息:\n", i+1);
		
		printf("name = ");
		scanf("%s", q[i].name);  
		
		printf("age = ");
		scanf("%d", &q[i].age);
		
		printf("score = ");
		scanf("%f", &q[i].score);
	}
}
	
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
	
	printf("请输入学生的信息:");
	printf("len = ");
	scanf("%d", &len);                                               
	p = (struct student * )malloc(len * sizeof(struct student));  
	
	f(p, len);
	
	
	
	for (i=0; i<len; ++i)
	{
		printf("请输入第%d个学生的信息:\n", i+1);
		
		printf("name = ");
		scanf("%s", p[i].name);                                      
		printf("age = ");
		scanf("%d", &p[i].age);
		
		printf("score = ");
		scanf("%f", &p[i].score);
		
		
		printf("\n\n");
	}
	//冒泡算法
	for (i=0; i<len-1; ++i)
	{
		for (j=0; j<len-1; ++j)
		{
			if (p[j].score > p[j+1].score)                           // >(升序)  ,  <(降序)     
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
	}
	
	printf("\n\n学生的信息是：\n");                                  // \n\n表示换两行
	
	for (i=0; i<len; ++i)
	{
		printf("第%d个学生的信息是：\n", i+1);
		
		printf("name = %s\n", p[i].name);
		printf("age = %d\n", p[i].age);
		printf("score = %f\n\n", p[i].score);
	}
	
	return 0;
}
