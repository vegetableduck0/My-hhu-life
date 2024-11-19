//简易计算机 函数与switch结构 

#include <stdio.h>
void add(double,double), subtract(double,double),multiply(double,double),divide(double,double);
int main()
{
	double a,b;

		char opt,goorstop;
	do 
	{
	printf("请输入要运行的计算，中间用空格隔开。\n如：1 + 1\n");
	scanf("%lf %c %lf",&a,&opt,&b);
	switch(opt)
	{ 
	case '+':add(a,b);	break;
	case '-':subtract(a,b);	break;
	case '*':multiply(a,b);	break;	
	case '/':divide(a,b);	break;
	default: printf("输入错误\n");
	}
	{
	printf("是否继续运算？\n是，请输入y；\n否，请输入n \n");
	scanf("%c",&goorstop);}      // 逆天没带占位符 
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
