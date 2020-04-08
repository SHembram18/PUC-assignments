//PROGRAM:TO PRINT THE FIRST 30 +VE EVEN NUMBER
//FILE:assign5_2.c
//CREATED BY:santosh hembram
//DATED:20/09/19

	#include<stdio.h>
	int main()
	{
		int i;
		printf("The first 30 +ve even number:");
		for(i=2;i<=60;i++)
		{
			if(i%2==0)
			printf("%d\t",i);
		}
	}
