//PROGRAM:Set intersection operation using array 
//FILE:assign10_3.c
//CREATED BY:SANTOSH HEMBRAM
//DATDED:24-10-19

	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
		int a[100],b[100],c[100],i,j,k,n,n2,p=0;
		printf("Enter the size of the 1st array-\n");
		scanf("%d",&n);
		printf("\nEnter the elements to the 1st array-\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("\nDispaly the elements of the 1st array-\n");
		for(i=0;i<n;i++)
			printf("\t%d",a[i]);
		printf("\nEnter the size of the 2nd array-\n");
		scanf("%d",&n2);
		printf("\nEnter the elements to the 2nd array-\n");
		for(j=0;j<n2;j++)
			scanf("%d",&b[j]);
		printf("\nDispaly the elements of the 2nd array-\n");
		for(j=0;j<n2;j++)
			printf("\t%d",b[j]);
		k=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n2;j++)
			{
				if(a[i]==b[j])
				{
					for(k=0;k<p;k++)
					{
						if(b[j]==c[k])
						break;
					}
					if(k==p)
					{
						c[p++]=a[i];
					}
				}
				if(j==n2)
				break;
			}
		}
		printf("\nintersection of two array is-\n");
		for(k=0;k<p;k++)
		printf("\t%d",c[k]);
	}
		
		
		
		
