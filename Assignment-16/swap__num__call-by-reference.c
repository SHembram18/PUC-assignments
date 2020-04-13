/*
 * PROGRAM:To swap an integer number using call-by-reference 
 * FILE:assign16_1.c
 * CREATED BY:Santosh Hembram
 * DATED:22/11/19
 */
	#include<stdio.h>
	
	void swap(int *p,int *q)
	{
		int temp;
		temp=*p;
		*p=*q;
		*q=temp;
	}
	int main()
	{
		int num1,num2;
		
		printf("Enter the value of num1 & num2:-\n");
		scanf("%d%d",&num1,&num2);

		printf("\nBefore swapping :-");
		printf("num1 = %d and num2 = %d\n",num1,num2);

		swap(&num1,&num2);

		printf("\nAfter swapping:-");
		printf("num1 = %d and num2= %d\n",num1,num2);

		return 0;
	}
