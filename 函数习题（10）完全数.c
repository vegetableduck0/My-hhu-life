//����ϰ�⣨10�� ���1000���ڵ���ȫ������ȫ�����������Ӻ͵��ڱ��� 
#include<stdio.h>
int main()
{
	int i,howmany=0;
	for (i=1;i<=1000;i++)
	{if (isComplete(i)) {howmany++;
	printf("%5d",i);} }
	printf("1000���ڹ���%d����ȫ����",howmany);
	return 0;
}
int isComplete(int a)
{
	int sum=0,temp;
	for (temp=1;temp<a;temp++)
	{if (a%temp==0) sum+=temp;}
	if (sum==a) return 1;  //�������ں� 
	else return 0; 
}
