//���׼���� ������switch�ṹ 

#include <stdio.h>
void add(double,double), subtract(double,double),multiply(double,double),divide(double,double);
int main()
{
	double a,b;

		char opt,goorstop;
	do 
	{
	printf("������Ҫ���еļ��㣬�м��ÿո������\n�磺1 + 1\n");
	scanf("%lf %c %lf",&a,&opt,&b);
	switch(opt)
	{ 
	case '+':add(a,b);	break;
	case '-':subtract(a,b);	break;
	case '*':multiply(a,b);	break;	
	case '/':divide(a,b);	break;
	default: printf("�������\n");
	}
	{
	printf("�Ƿ�������㣿\n�ǣ�������y��\n��������n \n");
	scanf("%c",&goorstop);}      // ����û��ռλ�� 
	while (goorstop == 'y');
	
	return 0 ;
	
}
void add(double x,double y)
{
	printf("%.2f + %.2f = %.2f",x,y,x+y);
}
void subtract(double x , double y)
{
	printf("%.2f - %.2f = %.2f",x,y,x-y);
}
void multiply(double x,double y)
{
	printf("%.2f * %.2f = %.2f",x,y,x*y);
}
void divide(double x,double y)
{
	printf("%.2f / %.2f = %.2f",x,y,x/y);
}
