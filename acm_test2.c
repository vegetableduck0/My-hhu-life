//acm test2 WakuWaku 


//#include<stdio.h>
//int main()
//{
//    int l,r,m,n=0;
//    ptrintf("请依次输入区间端点l r，中间用空格隔开。");
//    scanf("%d %d",&l,&r);
//    for(m=l;m<=r;m++)
//    {
//        if ((m%2==0&&m%3==0&&m%5!=0&&m%7!=0)||(m%2==0&&m%3!=0&&m%5==0&&m%7!=0)||
//    (m%2!=0&&m%3==0&&m%5==0&&m%7!=0)||(m%2==0&&m%3!=0&&m%5!=0&&m%7==0)||(m%2!=0&&m%3==0&&m%5!=0&&m%7==0)||
//    (m%2!=0&&m%3!=0&&m%5==0&&m%7==0))
//    	n++;
//    }
//    printf("Wakuwaku=%d",n);
//    return 0;
//}


int main()
{
	int l, r, yueshu=0, WakuWaku=0;
	scanf("%d %d", &l, &r);
	if (l <= r)
	{
		for (; l <= r; l++)
		{
			if (l % 2 == 0) yueshu++;
			if (l % 3 == 0) yueshu++;
			if (l % 5 == 0)yueshu++;
			if (l % 7 == 0)yueshu++;
			if (yueshu == 2)
				WakuWaku++;
			yueshu = 0;
		}
	}
	else printf("您的区间输入错误。");
	printf("%d", WakuWaku);
	return 0;

}
