//PROGRAM:Set difference opertaion using array
//FILE:assign10_4.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:24-10-19

	#include<stdio.h>
	int main()
	{
		int n1,n2,a[100],b[100],k,i,j,flag,c[100],p;
		printf("Enter the size of 1st array-");
		scanf("%d",&n1);	
		printf("\nEnter the element of 1st array-\n");
		for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
		printf("Enter the size of 2nd array-");
		scanf("%d",&n2);	
		printf("\nEnter the element of 2nd array-\n");
		for(j=0;j<n2;j++)
		scanf("%d",&b[j]);
		k=0;
		for(i=0;i<n1;i++)
		{
			flag=1;
			for(j=0;j<n2;j++)
			{
				if(a[i]==b[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				c[k]=a[i];
				k++;
			}
		}
		p=k;
		for(k=0;k<p;k++)
		{
			printf("\t%d",c[k]);
		}
	}
	

		
