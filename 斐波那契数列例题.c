//斐波那契数列（数组形式） 
//#include <stdio.h>
//int main()
//{
//	int Num[30];       //定义一个数组储存数值 
//	int i;            //i表示第几项 
//	for (i=0;i<30;i++) //通过for循环实现输入前30项 
//	{
//		if (i>=2)       
//		Num[i]=Num[i-1]+Num[i-2];    
//		else Num[i]=1;     //保证第一项与第二项为1 
//		printf("%10d",Num[i]);
//		if ((i+1)%5==0) printf("\n");
//	}
//	
// } 




//通过循环与条件选择实现 斐波那契数列 
#include <stdio.h>
int main()
{
	//防止程序复杂，减少变量使用
	int f1=1,f2=1,f,i;  //使后一项为f1与f2相加，通过i来记录项数 
	for(i=1;i<=30;i++)
	{
		if(i>=3)
		{
			f=f1+f2;
			printf("%8d",f);    //输出第i项数值
			f1 = f2;
			f2 = f; 			//实现f1 f2值的替换 
		 } 
		else  printf("%8d",f1);  //第1与2项不参与
		
		if(i%5==0) printf("\n");   //实现每5个数换行 
	}
	 
 } 

























