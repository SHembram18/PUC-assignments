//PROGRAM:Add the digit of the numbers till its reduce to single digit.
//FILE:asign7_6.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:27/09/19
	#include<stdio.h>
	int main()
	{
		int	num,sum,rem;
		printf("Enter a number:");
		scanf("%d",&num);
		again:
			sum=0;
		while(num>0)
		{
			rem=num%10;
			sum+=rem;
			num/=10;
		}
		if(sum>9)
		{
			num=sum;
			goto again;
		}
		printf("\nAfter reduce to single digit the sum is %d",sum);
	}
