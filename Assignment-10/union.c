//PROGRAM:To set implement set union operation
//FILE:assign10_2.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:24-10-19

	#include<stdio.h>
	int main()
	{
		int n,p=0,m,a[100],b[100],k,i,j,c[100];
		printf("Enter the range to the 1st array-:");
		scanf("%d",&n);
		printf("\nEnter the data to 1st array-");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			for(k=0;k<p;k++)
			{
				if(a[i]==c[k])
				break;
			}
				if(k==p)
					c[p++]=a[i];
		}
			printf("\nEnter the range to the 2nd array:");
			scanf("%d",&m);
			printf("\nEnter the data to 2nd array-");
			for(j=0;j<m;j++)
			{
				scanf("%d",&b[j]);
				for(k=0;k<p;k++)
				{
					if(b[j]==c[k])
					break;
				}
				if(k==p)
				c[p++]=b[j];
			}
			printf("\nDisplay the union elemnet:");
			for(j=p,p=0;p<j;p++)
			printf("\t%d",c[p]);
	}
			
			
