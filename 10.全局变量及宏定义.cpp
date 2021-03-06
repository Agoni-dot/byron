/*
学习目标
（1）宏名，全局变量名建议大写
（2）#号开头的都是预处理指令，预处理是发生在与编译阶段（编译阶段之前），对源文件进行一些简单的文本替换
（3）全局变量的作用域就是从定义出开始，到整个文件的末尾。
*/
#include <stdio.h>
//宏定义
#define PI 3.1415926		//这里定义了一个宏名PI，程序在编译阶段会把从该定义出之后所有出现PI的地方（出字符串以外），替换为3.1415926
//全局变量
int A;
int B = 3;
int main(void)
{
	printf("%lf\n", PI);
	printf("PI\n");
	//PI = 10;
	
	printf("%d, %d\n", A, B);		//输出0， 3
	return 0; 
 } 
