//1. ��д����ʵ�֣�����һ��ʵ��x�����㲢�����ʽS��ֵ��ֱ�����һ��ľ���ֵС��10-6��������������λС������
 



#include<stdio.h>
int main()
{
	int n,temp;
	double sum=0,i=2,j=1;
	for (n=1;n<=20;n++)
	{	printf ("%f/%f+",i,j);
		sum += i/j;
		temp=j;
		j=i;
		i=temp+i;
	}
	printf ("=%lf",sum);
	return 0;
}
//#include<stdio.h>
//void main()
//{    int n,t,number=20;
//float a=2,b=1,s=0;
//for(n=1;n<=number;n++) 
//{�� s=s+a/b;
//��  t=a;
//	a=a+b;
//	b=t;
//	}
//	printf("sum is %9.6f\n",s);}
