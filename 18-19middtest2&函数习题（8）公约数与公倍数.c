//��������������Լ������С������ 




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
	printf("�������������������м��ÿո������"); 
	scanf("%d %d",&x,&y);
	printf("%d �� %d �����Լ��Ϊ%d����󹫱���Ϊ%d",x,y,Gongyue(x,y),Gongbei(x,y));
	return 0;
}
