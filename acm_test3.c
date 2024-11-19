#include <stdio.h>
int main()
{
	long long int a,b,c;
	int i;
	unsigned long long int sum=0;
	scanf("%lld %lld %lld",&a,&b,&c);
    for (i=1;i<=a;i++)
	{
		sum += i*i*i*c*(c-1)*b*(b+1)*(2*b+1)/12;
	 } 
	printf("%lld",sum%998244353u);
	return 0;
} 
