/*
 * PROGRAM:To perform arithmatic operation
 * FILE:assign16_3.c
 * CREATED BY:Santosh Hembram
 * DATED:22/11/19
 */
	#include<stdio.h>

	void operation(int num1,int num2,int *sum,int *sub,int *mul,int *div,int *mod)
	{
		*sum = num1+num2;
		*sub = num1-num2;
		*mul = num1*num2;
		*div = num1/num2;
		*mod = num1%num2;
	}
	int main()
	{
		int num1,num2,sum,sub,mul,div,mod;

		printf("Enter num1 and num2:-\n");
		scanf("%d%d",&num1,&num2);

		operation(num1,num2,&sum,&sub,&mul,&div,&mod);
		
		printf("sum = %d\n",sum);
		printf("subtract = %d\n",sub);
		printf("multiplication = %d\n",mul);
		printf("division = %d\n",div);
		printf("mod = %d\n",mod);

		return 0;
	}


		
