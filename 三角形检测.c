//�ж�һ�������ε�����
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("�����������ε�������a,b,c��"); 
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
		if ((a==b)||(a==c)||(b==c))
		{
			if (a==b==c)	printf("����������ǵȱ�������");
			else	printf("����������ǵ���������") ;  
		}
		else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
			{printf("�����������ֱ�������Σ�"); }
    	    else printf("�����������һ��������");
		return 0; 
		
	}
	else printf("���ܹ��������Ρ�");
 } 
