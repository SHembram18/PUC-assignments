//PROGRAM:To insert a number afetr a given number
//FILE:assign9_1.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:23-10-19
	
	#include<stdio.h>
	int main()
	{
		int t=0,a[100],num,n,i,x,j;
		printf("Enter a range[max-100]-");
		scanf("%d",&n);
		printf("\nEnter the data to the array-");
		for(i=0;i<n;i++)
		scanf("\n%d",&a[i]);
		
		printf("\nDisplay the elements of the array-");
		for(i=0;i<n;i++)
		printf("\n%d",a[i]);
		printf("\nEnter the key element-");
		scanf("%d",&x);
		for(j=0;j<n;j++)
		{
			if(a[j]==x)
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			printf("key element not found");
			return 0;
		}
		for(i=n;i>=j+1;i--)
		a[i]=a[i-1];
		n++;
		printf("\nEnter the number to insert-");
		scanf("%d",&num);
		a[j+1]=num;
		printf("\nAfter inserting display the array-");
		for(i=0;i<n;i++)
		printf("\n%d",a[i]);
	}
