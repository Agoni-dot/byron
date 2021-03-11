#include <stdio.h>
int main(void)
{
	double a;							//double 双精度浮点型
	printf("请输入你的成绩：\n");
	scanf("%lf", &a);
	/* 									//方法一 
	if(a<0 || a>100)					//||逻辑或 如果两边的表达式有一个为真，则整个表达式为真；如果两边的表达式都为假，则整个表达式才为假 
		printf("这个成绩不可能的\n");					
	if(a>=0 && a<=60)					//&& 逻辑与 如果两边的表达式有一个为假，则整个表达式为假；如果两边的表达式都为真，则整个表达式才为真 
		printf("这个成绩不及格\n");		
	if(a>=60 && a<=100)
		printf("这个成绩及格\n");
	*/ 
	/*									//方法二 
	if(a<0 || a>100)
		printf("这个成绩是不可能的\n");
	else
	{
		if(a<60)
			printf("这个成绩是不及格\n");
		else
			printf("这个成绩及格\n");
	}
	*/									//方法三    与方法二等价 
	if(a<0 || a>100)
		printf("这个成绩是不可能的\n");
	else if(a<60)
		printf("这个成绩是不及格\n");
	else
		printf("这个成绩及格\n");
	return 0;
}
