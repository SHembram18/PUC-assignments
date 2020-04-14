/*
 * PROGRAM:Check the number is prime or not using recursion
 * FILE:assign18_3.c
 * CREATED BY:Santosh Hembram
 * DATED:04/12/19
 */

	#include<stdio.h>
	int primeno(int,int);
	int main()
	{
		int num,check;
		printf("Enter a number:-\n");
		scanf("%d",&num);
		check=primeno(num,num/2);
		if(check==1)
			printf("%d is a prime number\n",num);
		else
			printf("%d is not a prime number\n",num);
		return 0;
	}
	int primeno(int num,int i)
	{
		if(i==1)
		{
			return 1;
		}
		else
		{
			if(num%i==0)
			{
				return 0;
			}
			else
			{
				return primeno(num,i-1);
			}
		}
	}
	
