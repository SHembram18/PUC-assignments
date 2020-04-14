/*
 * PROGRAM:Find multiplication table using recursion
 * FILE:assign18_5.c
 * CREATED BY:Santosh Hembram
 * DATED:04/12/19
 */

	#include<stdio.h>
	int mul(int num,int i);
	int main()
	{
		int num,i=1;
		printf("Enter the number:-\n");
		scanf("%d",&num);
		mul(num,i);
	}
	int mul(int num,int i)
	{
		if(i>10)
		{
			return 0;
		}
		else
		{
			printf("%d * %d = %d\n",num,i,num*i);
			return mul(num,i+1);
		}	
	}
