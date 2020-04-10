/*
 * PROGRAM:To find largest & smallest number in an array print their difference
 * FILE:assign10_1.c
 * CREATED BY:Santosh hembram
 * DATED:24-10-19
 */
	#include<stdio.h>
	int main()
	{
		int	a[100],i,n,large,small,dif;
		printf("Enter the range of the array:");
		scanf("%d",&n);
		
		printf("\nEnter the data to the array:");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);

		large=a[0];
		small=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>large)
				large=a[i];
			if(a[i]<small)
				small=a[i];
		}
		printf("\nDisplay data to the array");
		for(i=0;i<n;i++)
		printf("\t%d",a[i]);
		dif=large-small;
		printf("\nThe difference between large number %d & small number %d = %d",large,small,dif);
	}
		
