//����ϰ�⣨13���ݹ�
#include <stdio.h>
int Yn(int n)
{
	if (n==0) return 0;		//�ݹ�д�ɷֶκ�����ʽ����||�յ� 
	else if (n==1) return 1;
	else if (n==2) return 2;  //�����û��˫�Ⱥ�gan�� 
	else return Yn(n-1)+Yn(n-2)+Yn(n-3); 
} 
int main()
{
	int i;
	for(i=0;i<20;i++)
	{printf("��n=%dʱ Yn=%d\n",i,Yn(i));}
 } 
