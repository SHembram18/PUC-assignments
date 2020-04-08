//PROGRAM:To print the  factorial of an integer
//FILE:assign5_7.c
//CREATED BY:SANTOSH HEEMBRAM
//DATED:20/09/19

	#include<stdio.h>
	int main()
	{
		long int i,factorial=1,n;
		printf("Enter an integer:");
		scanf("%ld",&n);
		for(i=n;i>=1;i--)
			factorial=factorial*i;
		printf("%ld\n",factorial);
	}
