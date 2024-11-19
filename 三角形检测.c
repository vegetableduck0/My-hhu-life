//判断一个三角形的类型
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三角形的三条边a,b,c。"); 
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
		if ((a==b)||(a==c)||(b==c))
		{
			if (a==b==c)	printf("这个三角形是等边三角形");
			else	printf("这个三角形是等腰三角形") ;  
		}
		else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
			{printf("这个三角形是直角三角形，"); }
    	    else printf("这个三角形是一般三角形");
		return 0; 
		
	}
	else printf("不能构成三角形。");
 } 
