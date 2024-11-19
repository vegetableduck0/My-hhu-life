#include <stdio.h>
int main()
{
	double a;
	int Firstpoint (double);
	printf("请输入你需要转换的浮点数：") ; 
	scanf("%lf",&a);
	printf("%lf转换后是：",a);
	if (Firstpoint(a)<4) printf("%d",(int)a);
	else printf("%d",(int)a+1);
	return 0;
}
int Firstpoint(double a)
{
	return (int)(a*10)%10;
}
