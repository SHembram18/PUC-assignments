//PROGRAM:To test entered integer is perfect or not
//FILE:assign6_5.c
//CREAYTED BY:SANTOSH HEMBRAM
//DATED:23/09/19
	#include<stdio.h>
	int main()
	{
		int i,num,sum=0;
		printf("Enter an integer:");
		scanf("%d",&num);
		for(i=1;i<=num-1;i++)
		{
			if(num%i==0)
				sum=sum+i;
		}
		if(sum==num)
			printf("%d is a perfect number",num);
		else
			printf("%d is not a perfect number",num);
	}
