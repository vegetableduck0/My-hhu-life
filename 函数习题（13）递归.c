//函数习题（13）递归
#include <stdio.h>
int Yn(int n)
{
	if (n==0) return 0;		//递归写成分段函数形式有起||终点 
	else if (n==1) return 1;
	else if (n==2) return 2;  //妈的又没带双等号gan！ 
	else return Yn(n-1)+Yn(n-2)+Yn(n-3); 
} 
int main()
{
	int i;
	for(i=0;i<20;i++)
	{printf("当n=%d时 Yn=%d\n",i,Yn(i));}
 } 
