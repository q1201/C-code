/* 
   时间：2021.08.04 22：27

   功能：

   目的：通过函数完成对结构体变量的输入和输出

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
	struct infor mark;                                               //结构体的嵌套使用
	int age;
	char sex;
	char name[100];
	float score;
};                                                                   //分号不能省

void inputstudent(struct student *);
void outputstudent(struct student *);
//void outputstudent(struct student r);

int main(void)
{
	struct student st = {{1, 170.20f}, 20, 'f', "张三", 99.9f};
	 printf("%d\n", sizeof(st));                                     //字节数：120

	inputstudent(&st);                                               //对结构体变量输入  必须发送st的地址                 
	outputstudent(&st);      //传址调用                                        
//  outputstudent(st);       //传值调用                              //对结构体变量输出  可以发送st的地址也可以直接发送st的内容

	return 0;
}

/*
void outputstudent(struct student r)
{
    printf("%d, %f, %d, %s, %f, %c\n", r.mark.id, r.mark.high, r.age, r.name, r.score, r.sex);
}
*/

void inputstudent(struct student * p)                                //p 只占四个字节
{
	p->mark.id = 9;
	p->mark.high = 77.2f;
	p->age = 18;
    strcpy(p->name, "李四");                                         //不能写成 p->name = "李四";
	p->score = 88.8f;
	(*p).sex = 'm';
}

void outputstudent(struct student * q)
{
	printf("%d, %f, %d, %s, %f, %c\n", q->mark.id, q->mark.high, q->age, q->name, q->score, q->sex);
}

/* 在VC++6.0中的运行结果为：
--------------------------------------


9, 77.199997, 18, 李四, 88.800003, m


--------------------------------------
总结：
*/