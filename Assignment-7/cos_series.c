//PROGRAM:To print the result of cos series upto nth term
//FILE:assign7_4.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:27/09/19
	#include<stdio.h>
	int main()
	{
		int 	i,n;
		float	x,sum=1,t=1;
		printf("Enter the value for x:");
		scanf("%f",&x);
		printf("\nEnter the value for n:");
		scanf("%d",&n);
		x=x*3.14159/180;
		for(i=1;i<=n;i++)
		{
			t=t*(-1)*x*x/(2*i*(2*i-1));
			sum+=t;
		}
		
		printf("\nThe value of cos(%f)is :%f",x,sum);
		return 0;
	}

