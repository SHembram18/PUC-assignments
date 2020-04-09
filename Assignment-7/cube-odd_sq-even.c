//PROGRAM:To find the cube of odd position digit & square of even position digit.
//FILE:assign7_7.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:27/09/19
	#include<stdio.h>
	int main()
	{
		int	num,dg,ODD_POS,EVEN_POS,count=0;
		printf("Enter a number:");
		scanf("%d",&num);
		while(num!=0)
		{
			dg=num%10;
			count++;
			if(count%2!=0)
			{
				ODD_POS=dg*dg*dg;
				printf("\ncube =%d",ODD_POS);
			}
			else if(count%2==0)
			{
				EVEN_POS=dg*dg;
				printf("\nsquare =%d",EVEN_POS);
			}
			num/=10;
		}
		return 0;
	}
