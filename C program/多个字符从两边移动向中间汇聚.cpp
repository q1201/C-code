/*时间：2021年9月27日22:07

  功能：
  
  目的：
	
*/
# include <stdio.h>
# include <string.h>
# include <windows.h>


int main(void)
{
	char arr1[] = "welcome to C program";
	char arr2[] = "********************";
	
	int left = 0;
	int right = strlen(arr1) - 1;
	
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);
		
 		Sleep(1000);                                  //头文件：# include <windows.h> ；功能：执行挂起一段时间，也就是等待一段时间在继续执行；Sleep括号里的时间，在windows下是已毫秒为单位 
		
		system ("cls");                              //清空屏幕，头文件：# include <windows.h>
		
		left++;
		right--;

		
	}

	printf("%s\n", arr2);                             //按字符数组名arr2找到其数组起始地址，然后逐个输出其中的字符，直到遇到'\0'为止。
	
	return 0;
}
/*
在VC++6.0中的输出结果是:
------------------------------

welcome to C program

-------------------------------
总结：
	
*/