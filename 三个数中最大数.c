//#include <stdio.h>
//int main (void)
//{
//	int a,b,c;
//	printf("�����������������м��ÿո����\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a>=b&&a>=c)
//	printf("%d��������",a);
//	if (b>=a&&b>=c)
//	printf("%d��������",b);
//	if (c>=a&&c>=b)
//	printf("%d��������",c);
//	return 0;
// } 


#include <stdio.h>
int main (void)
{
	int a,b,c,max;
	printf("�����������������м��ÿո����\n");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>=b&&a>=c)?a:((b>=a&&b>=c)?b:c);
	printf("%d��������",max);
	return 0;
}
