//函数习题（10） 输出1000以内的完全数，完全数是所有因子和等于本身 
#include<stdio.h>
int main()
{
	int i,howmany=0;
	for (i=1;i<=1000;i++)
	{if (isComplete(i)) {howmany++;
	printf("%5d",i);} }
	printf("1000以内共有%d个完全数。",howmany);
	return 0;
}
int isComplete(int a)
{
	int sum=0,temp;
	for (temp=1;temp<a;temp++)
	{if (a%temp==0) sum+=temp;}
	if (sum==a) return 1;  //两个等于号 
	else return 0; 
}
