//PROGRAM:2nd largest and 2nd smallest element in an array
//FILE:	assign10_5.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:

	#include<stdio.h>
	int main()
	{
		int a[100],i,n,j,store;
		printf("Enter the size[max-100]-\n");
		scanf("%d",&n);
		printf("\nEnter the data to the array-\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("\nDisplay the data of the array-\n");
		for(i=0;i<n;i++)
			printf("\t%d",a[i]);
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					store=a[i];
					a[i]=a[j];
					a[j]=store;
				}
			}
		}
		printf("\nThe 2nd largest number is %d",a[n-2]);
		printf("\nThe 2nd smallest number is %d",a[1]);
	}
		
		
		

