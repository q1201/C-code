/*时间：2021年8月02日23:09

  功能：
  
  目的：

  格式：struct 结构体名
       {

	      成员列表

       }变量名,变量名；         此时创建的变量为全局变量
       int main()
	   {
	       struct 结构体名 变量名 = {变量列表};    此时创建的变量为局部变量
	   }

或
       struct 结构体名 
       {

	      成员列表                             

       }变量名；	        此时创建的变量为全局变量 ；这个不好
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
	mate->score = 88.8f;                                       //mate->score在计算机内部会转换位(*mate).score ，所以 (*mate).score 等价于 st.score 
	mate->sex = 'g';                                           //mate->sex代表在mate所指向的那个结构体的 sex 这个成员

	printf("%d, %f, %C\n", (*mate).age, st.score, (*mate).sex);
*/


/*
	struct student room;

	room.age = 55;
	room.score = 55.5f;                                        //55.5默认是double类型，如果希望一个实数是float类型，则必须在末尾加f或F，因此55.5f或55.4F是float类型
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
VC++6.0输出结果：
---------------------------------

88, 88.800003, g

55, 55.500000, f

77, 77.699997, b

---------------------------------
结论：
*/