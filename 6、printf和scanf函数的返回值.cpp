#include <stdio.h>
int main(void)
{
	printf("%d\n", printf("haha\n"));			//printf函数的返回值为整形，会把所输出的字符个数返回 
	/*
	输出
	haha
	5	 	函数字符 
	*/
	int a, b;
	printf("%d\n", scanf("%d%d", &a, &b)); 		//scanf函数的返回其按照正确格式输出的变量的个数  %d为数字格式 
	return 0;
 } 
