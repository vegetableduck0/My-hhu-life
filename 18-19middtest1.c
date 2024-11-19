//1. 编写程序实现：输入一个实数x，计算并输出下式S的值，直到最后一项的绝对值小于10-6（输出结果保留两位小数）。
 



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
//{　 s=s+a/b;
//　  t=a;
//	a=a+b;
//	b=t;
//	}
//	printf("sum is %9.6f\n",s);}
