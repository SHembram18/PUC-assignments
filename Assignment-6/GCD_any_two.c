//PROGRAM:To find the GCD of any two number
//FILE:assign6_9
//CREATED BY:SANTOSH
//DATED:23-09-19
	#include<stdio.h>
	int main()
	{
		int n1,n2,GCD,i;
		printf("Enter any two number:");
		scanf("%d%d",&n1,&n2);
		for(i=1;i<=n1 && i<=n2;i++)
		{
			if(n1%i==0 && n2%i==0)
				GCD=i;
		}
		printf("The GCD of %d and %d is:%d",n1,n2,GCD);
	}
