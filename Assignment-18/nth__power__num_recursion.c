/*PROGRAM:To find nth power of a number using recursion
 * FILE:assign18_1.c
 * CREATED BY:Santosh Hembram
 * DATED:04/12/19
 */



	#include<stdio.h>
	int power(int n,int p)
	{
		if(p==0)
			return 1;
	
		else
			return n*power(n,p-1);
		
	}
	void main()
	{
		int n,p;

		printf("Enter number and power:-\n");
		scanf("%d%d",&n,&p);
		
		printf("\nPower is : %d",power(n,p));
	}
