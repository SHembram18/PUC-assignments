//PROGRAM:To print the product of first 10 +ve integer
//FILE:assign5_5.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:20/09/19

	#include<stdio.h>
	int main()
	{
		int i,product=1;
		for(i=1;i<=10;i++)
			product=product*i;
		printf("%d\n",product);
	}
