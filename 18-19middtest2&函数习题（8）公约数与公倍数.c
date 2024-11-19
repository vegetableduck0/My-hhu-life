//输出两个数的最大公约数和最小公倍数 




#include<stdio.h>
int Gongyue(int a,int b)
{ int temp;
	if (a<b)
	{
		temp=b;
		b=a;
		a=temp;}
	do{
		temp= a%b;
		a=b;
		b=temp;}while(a%b!=0);
	return b;
}
int Gongbei(int a,int b)
{
	return a*b/Gongyue(a,b);
}
int main()
{
	int x,y;
	printf("请输入两个正整数，中间用空格隔开："); 
	scanf("%d %d",&x,&y);
	printf("%d 和 %d 的最大公约数为%d，最大公倍数为%d",x,y,Gongyue(x,y),Gongbei(x,y));
	return 0;
}
