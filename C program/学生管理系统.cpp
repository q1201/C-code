/*
  时间：2021年8月10日22:35

  功能：将学生信息按成绩依次排列
  
  目的：

*/
# include <stdio.h>
# include <malloc.h>

//结构体
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

/*
   17-23行动态的构造了一个一维数组，数组名是p，数组的长度是len, malloc(len * sizeof(struct student))的返回值为第一个字节的地址;
   (struct student *)表示把返回值为第一个字节的地址按结构体类型(struct student)来划分，所以(len * sizeof(struct student))数组的
   每个元素都是结构体类型。 
*/

	for (i=0; i<len; ++i)
	{
		printf("请输入第%d个学生的信息:\n", i+1);

		printf("name = ");
		scanf("%s", p[i].name);                                      //name是数组名，本身就已经是数组首元素的地址, 所以p[i].name 不能改成 &p[i].name

		printf("age = ");
		scanf("%d", &p[i].age);

		printf("score = ");
		scanf("%f", &p[i].score);


		printf("\n\n");                                              //换两行
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
/*
VC++6.0输出结果：
---------------------------------



---------------------------------
结论：
*/
