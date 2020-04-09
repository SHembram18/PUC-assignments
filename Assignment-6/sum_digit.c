//PROGRAM:To print the sum of individual digits of a +ve integer
//FILE:assign6_1.c
//CREATED BY:SANTOSH
//DATED:23/09/19

	#include<stdio.h>
	int main()
	{
		int num,digit,sum=0;
		printf("Enter the number:");
		scanf("%d",&num);

		while(num!=0)
		{
			digit=num%10;
			sum=sum+digit;
			num/=10;
		}
		printf("sum=%d",sum);
	}
