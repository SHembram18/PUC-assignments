/*
 * PROGRAM:To find the fibonacci series using recursion
 * FILE:assign18_2.c
 * CREATED BY:Santosh Hembram
 * DATED:04/12/19
 
	#include<stdio.h>
	int fibo(int num)
	{
		if( num <=1)
			return 1;
		else
			return (fibo(num-1)+fibo(num-2));
	}		
	int main()
	{
		int num,fibo1,i;
		printf("Enter the number upto which you want the fibonacci series: ");
		scanf("%d",&num);
		for(i=0;i<num;i++)
			printf("%d",fibo(i));
		printf("\n");
	return 0;

	}*/
	#include<stdio.h>

int fibonacci(int num)
{
	if(num <= 1)
		return num;
	return(fibonacci(num-1) + fibonacci(num-2));
}

int main()
{
	int num, i;

	printf("Enter the number of terms in the series: ");
	scanf("%d", &num);

	printf("\n---FIBONACCI SERIES UP TO %d TERMS---\n", num);
	for(i=0; i<num; ++i)
		printf("%d ", fibonacci(i));
	printf("\n");

	return 0;
}
	
