//PROGRAM:To check an integer as Armstrong number or not
//FILE:assign6_6.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:23/09/19
	#include<stdio.h>
	int main()
	{
		int num,num1,sum=0,digit;
		printf("Enter an integer number:");
		scanf("%d",&num);
		num1=num;
		while(num!=0)
		{
			digit=num%10;
			sum=(digit*digit*digit)+sum;
			num/=10;
		}
		if(num1==sum)
			printf("%d is an Armstrong number",num1);
		else
			printf("%d is not an Armstrong number",num1);
	}
