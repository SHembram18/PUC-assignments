//PROGRAM:To display a positve integer is a prime or not
//FILE:assign6_4.c
//CREATED BY:SANTOSH
//DATED:23/09/19

	#include<stdio.h>
	int main()
	{
		int num,i,p=0;
		printf("Enter a positive integer:");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
			if(num%i==0)
				p++;
		if(p==2)
			printf("\nThe number is a prime number");
		else
			printf("\nThe number is not a prime number");
	}
