//PROGRAM:Delete all the duplicate in array
//FILE:assign9_3.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:23-10-19
	#include<stdio.h>
	int main()
	{
		int l,i,j,k;
		printf("Enter the length of the array- ");
		scanf("%d",&l);
		int a[l];
		printf("\nEnter the elements into the array-");
		for(i=0;i<l;i++)
		scanf("%d",&a[i]);
		printf("\nARRAY-");
		for(i=0;i<l;i++)
		printf("\n%d",a[i]);
		for(k=0;k<l;k++)
		{
			for(i=0;i<l;i++)
			{
				for(j=i+1;j<l;j++)
				{
					if(a[i]==a[j])
					{
						for(;j<l;j++)
							a[j]=a[j+1];
							l--;
					}
				}
			}
		}
		printf("\nDispaly the array-");
		for(i=0;i<l;i++)
		printf("\n%d",a[i]);
		return	0;
	}

		
