#include <stdio.h>              //printf��scanf�ĺ�����������stdio.h�printf��scanf�����Ķ����ڿ��� 
int main(void)
{
	double a,b;					//double  �������������� 
	printf("������2����: \n");
	scanf("%lf%lf", &a, &b);	//&ȡ�ص�ַ�� 
	printf("a is %lf, b is %lf\n", a, b);  //%lf���ڶ�һ�������� ���ݽ��и�ʽ������������õ��ĸ�ʽ˵���� 
	/*							//����1 
	if(a >= b)
		printf("a�����ֵ����ֵΪ��%lf\n", a);
	else
		printf("b�����ֵ����ֵΪ��%lf\n", b);
	*/
	if(a < b)					//����2 
		a = b;
	printf("���ֵΪ��%lf\n", a);
	return 0;
 } 
