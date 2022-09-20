//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int a(int N1,int D1);
int main()
{
	int n,n1,d1;
	printf("enter the number and digits = ");
	scanf("%d %d",&n1,&d1);
	a(N1,D1);
}
int a(int N1,int D1)
{
    int N1,D1,num,rem
     while(x1!=0)
	{
		rem=num%10;
		if(rem==D1)
		{
			printf("%d is occured in %d",D1,N1);
			return 0;
		}
		num/=10;
		printf("%d is not occured in %d",D1,N1);
	    return(num!=0);
	}
}


