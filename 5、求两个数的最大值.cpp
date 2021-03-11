#include <stdio.h>              //printf和scanf的函数声明都在stdio.h里，printf和scanf函数的定义在库里 
int main(void)
{
	double a,b;					//double  浮点型数据类型 
	printf("请输入2个数: \n");
	scanf("%lf%lf", &a, &b);	//&取地地址符 
	printf("a is %lf, b is %lf\n", a, b);  //%lf是在对一个浮点型 数据进行格式化输入输出所用到的格式说明符 
	/*							//方法1 
	if(a >= b)
		printf("a是最大值，其值为：%lf\n", a);
	else
		printf("b是最大值，其值为：%lf\n", b);
	*/
	if(a < b)					//方法2 
		a = b;
	printf("最大值为：%lf\n", a);
	return 0;
 } 
