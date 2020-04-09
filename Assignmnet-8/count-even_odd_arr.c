//PROGRAM:To input n number in an integer array count the even number & odd number present in the array
//FILE:assign8_2.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:21-10-19

	#include<stdio.h>
	int main()
	{
		int 	n,a[100],count=0,count2=0,i;
		printf("Enter a range[max-100]:");
		scanf("%d",&n);
		printf("\nEnter the data to the array:");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("\nDispaly the elements of the array:");
		for(i=0;i<n;i++)
		printf("\n%d",a[i]);
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
				count++;
			else
				count2++;
		}
		printf("\nThe occurenace of even number in the array is =%d",count);
		printf("\nThe occurenace of odd number in the array is =%d",count2);
	}
		
