#include <stdio.h>
int main()
{
	double a;
	int Firstpoint (double);
	printf("����������Ҫת���ĸ�������") ; 
	scanf("%lf",&a);
	printf("%lfת�����ǣ�",a);
	if (Firstpoint(a)<4) printf("%d",(int)a);
	else printf("%d",(int)a+1);
	return 0;
}
int Firstpoint(double a)
{
	return (int)(a*10)%10;
}
