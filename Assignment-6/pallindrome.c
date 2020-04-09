//PROGRAM:To dispaly entered number is pallindrome or not
//FILE:assign6_3.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:23/09/19
	#include<stdio.h>
	int main()
	{
		int n,n1,remainder,reverse=0;
		printf("Enter an integer:");
		scanf("%d",&n);
		n1=n;
		while(n!=0)
		{
			remainder=n%10;
			reverse=reverse*10+remainder;
			n/=10;
		}
		if(reverse==n1)
			printf("Entered integer is a pallindrome");
		else
			printf("Entered integer is not a pallindrome");
	}
		
