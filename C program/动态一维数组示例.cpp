
/*
  时间：2021年7月30日23:17

  功能：
  
  目的：

  格式：

*/
# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5];                                    //如果int占4个字节的话，则本数组总共包含有4 * 5 == 20个字节，每四个字节被当做了一个int变量来使用
	int * pArr;
	int len;
	int i;

	printf("请输入数组的长度：");
	scanf("%d", &len);
	printf("\n");
                                               
	pArr = (int *)malloc(4 * len);               /*
											       26行动态的构造了一个一维数组, 该一维数组的长度是len, malloc(4 * len)返回值为第一个字节的地址;
												   该数组的数组名是pArr, (int *)表示把返回值为第一个字节的地址按整型来划分，所以(4 *len)数组的每个元素都是int类型 
	                                               表达形式类似于静态分配 int pArr[len];                     
                                                 */
    printf("请对一维动态数组赋值，中间用空格隔开：");
	for (i=0; i<len; ++i)
		scanf("%d", &pArr[i]);
	printf("\n");

	printf("一维数组的输出结果为：\n");
    printf("\n");
	for (i=0; i<len; ++i)
		printf(" %d\n", pArr[i]);
	printf("\n");

	free(pArr);                                  //释放掉动态分配的数组

	printf("动态一维数组释放后的输出结果为：\n");
	for (i=0; i<len; ++i)
		printf("%d\n", pArr[i]);

	return 0;
}
/*
VC++6.0输出结果：
---------------------------------



---------------------------------
结论：
*/
