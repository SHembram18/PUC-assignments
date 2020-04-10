//PROGRAM:Input n no into an array count the pair of elements whose sum is more than 20
//FILE:assign10_6.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:

	#include<stdio.h>
	int main()
	{		int j=0,a[100],n,i=0,sum=0,count=0;
		
			printf("Enter the size[max-100]");
			scanf("%d",&n);
			printf("\nEnter the numbers-\n");
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					sum=a[i]+a[j];
					if(sum>=20)
					count++;
				}
			}
			printf("\nTotal number of pair of elements whose sum is >20 is %d ",count);
	}
		
