#include <stdio.h>
//打印一张九九乘法表 
int main()
{
	int i,j;     //i定义行数，j定义列数 
	for (i=1;i<=9;i++)
	{ 
		for (j=1;j<=i;j++)
		{
			printf("%d * %d = %-3d",j,i,i*j);
		 } 
		 printf("\n");
	}
	return 0;
 } 
