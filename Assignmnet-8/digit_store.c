//PROGRAM:Input a number & stored the digits into an array 
//FILE:assign8_4.c
//CREATED:SANTOSH HEMBRAM
//DATED:21-10-19
	#include<stdio.h>
	int main()
	{
		int	num,a[100],i=0,rem,num1;
		printf("Enter a number-");
		scanf("%d",&num);
		num1=num;
		for(i=0;num!=0;i++)
		{
			rem=num%10;
			a[i]=rem;
			num/=10;
		}
		printf("\nDispaly the stored digits of the number %d in array-",num1);
		for(num=i,i=0;i<num;i++)
		printf("\n%d",a[i]);
		return 0;
	}
		
		
