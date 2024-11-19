//#include <stdio.h>
//int main (void)
//{
//	int a,b,c;
//	printf("请输入三个整数，中间用空格隔开\n");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a>=b&&a>=c)
//	printf("%d是最大的数",a);
//	if (b>=a&&b>=c)
//	printf("%d是最大的数",b);
//	if (c>=a&&c>=b)
//	printf("%d是最大的数",c);
//	return 0;
// } 


#include <stdio.h>
int main (void)
{
	int a,b,c,max;
	printf("请输入三个整数，中间用空格隔开\n");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>=b&&a>=c)?a:((b>=a&&b>=c)?b:c);
	printf("%d是最大的数",max);
	return 0;
}
