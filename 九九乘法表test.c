#include <stdio.h>
//��ӡһ�žžų˷��� 
int main()
{
	int i,j;     //i����������j�������� 
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
