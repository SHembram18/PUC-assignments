//PROGRAM:To print the product of all +ve integer ranging from n1 to n2 ,where n1 & n2 are two +ve integer input          by the user 
//FILE:assign5_6.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:20/09/19

	#include<stdio.h>
	int main()
	{
		long int n1,n2,i,product=1;
		printf("Enter two integer n1 and n2 respectievely:");
		scanf("%ld%ld",&n1,&n2);
		if(n1<n2)
		{
			for(i=n1;i<=n2;i++)
				product=product*i;
			printf("%ld\n",product);
		}
		else
		{
			for(i=n2;i<=n1;i++)
				product=product*i;
			printf("%ld\n",product);
		}
			
	}
