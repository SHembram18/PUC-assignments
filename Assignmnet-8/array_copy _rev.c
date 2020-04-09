//PROGRAM:To copy the content of one array into another array in a reverse order
//FILE:assign8_1.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:21-10-19

	#include<stdio.h>
	int main()
	{
		int	a[100],b[100],n,i,j;
		printf("Enter the range of the array[max-100]:");
		scanf("%d",&n);
		printf("Enter the data to the array:");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("\nDispaly the data of the array:");
		for(i=0;i<n;i++)
		printf("\n%d",a[i]);
		for(i=0,j=n-1;i<n;i++,j--)
		b[j]=a[i];
		printf("\nDispaly the data of the copy array in a reverse order:");
		for(j=0;j<n;j++)
		printf("\n%d",b[j]);
		return 0;
	}
