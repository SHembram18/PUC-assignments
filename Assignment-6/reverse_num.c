//PROGRAM:TO PRINT  THE REVERSE OF A POSITIVE INTEGER
//FILE:assign6_2.c
//CREATED BY:HEMBRAM
//DATED:23/09/19
	#include<stdio.h>
	int main()
	{
		int num,remainder,reverse=0;
		printf("Enter a positive integer number:");
		scanf("%d",&num);
		while(num!=0)
		{
			remainder=num%10;
			reverse=reverse*10+remainder;
			num/=10;
		}
		printf("reverse=%d",reverse);
	}
