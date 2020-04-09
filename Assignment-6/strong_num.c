//PROGRAM:To check an integer as strong number or not
//FILE:assign6_7.c
//CREATED BY:santosh hembram
//DATED:23/09/19
	#include<stdio.h>
	int main()
	{
		int num,sum=0,num1,remainder,i,factorial;
		printf("Enter an integer:");
		scanf("%d",&num);
		num1=num;
		while(num!=0)
		{
			i=1;
			factorial=1;
			remainder=num%10;
			while(i<=remainder)
			{
				factorial*i;
				i++;
			}
			sum=sum+factorial;
			num/=10;
		}
		if(num1==sum)
			printf("%d is a strong number",num1);
		else
			printf("%d is not a strong number",num1);
	}
