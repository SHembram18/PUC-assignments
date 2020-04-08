//PROGRAM:TO PRINT THE 1ST 30 +ve odd number
//FILE:assign5_3.c
//CREATED BY:HEMBRAM
//DATED:20/09/19
	#include<stdio.h>
	int main()
	{
		int i;
   		printf("The first 30 +ve odd number:");
		for(i=1;i<=60;i++)
		{
			if(i%2==1)
			printf("%d\t",i);
		}
	}
