//PROGRAM:To print the multiplication table of a given number
//FILE:ssign7_5.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:27/09/19
	#include<stdio.h>
	int main()
	{
		int 	num,i,mul;
		printf("Enter a number:");
		scanf("%d",&num);

		for(i=1;i<=10;i++)
		{
			mul = num * i;
			printf("\n%d * %d = %d",num,i,mul);
		}
		return 0;
	}
