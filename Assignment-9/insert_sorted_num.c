//PROGRAM:To insert a numbner according to its precedence
//FILE:assign9_2.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:23-10-19
	#include<stdio.h>
	int main()
	{
		int	a[100],j=0,i=0,n,n_num,pos,temp;
		printf("Enter a range[max-100]-");
		scanf("%d",&n);
		printf("Enter data to the array-");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("\nDispaly the data of the array-");
		for(i=0;i<n;i++)
		printf("\n%d",a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("\nTHe sorted array is-");
		for(i=0;i<n;i++)
		printf("\n%d",a[i]);
		printf("\nEnter the number to be inserted-");
		scanf("%d",&n_num);
		for(i=0;i<n;i++)
		{
			if(a[i]<n_num && a[i+1]>n_num)
			{
				pos=i+1;
				for(i=n-1;i>=pos;i--)
				a[i+1]=a[i];
			}
		}
		a[pos]=n_num;
		n++;
		printf("\nDisplay the array after inserting-");
		for(i=0;i<n;i++)
		printf("\n%d",a[i]);
		return 0;
		
	}
		
