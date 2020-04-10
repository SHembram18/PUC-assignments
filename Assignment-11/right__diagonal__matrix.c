//PROGRAM:Right diagonal of a matrix
//FILE:assign11_2.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:28/10/19

	#include<stdio.h>
	int main()
	{
		int r,c,i,j,a[10][10];
		START:
		printf("Enter the size of matrix:");
		scanf("%d%d",&r,&c);
		
		if((r!=c) || (r>10 && c>10))
		{
			printf("\nThe max limit is 10x10 or entered size is not a square matrix\n");
			goto START;
		}
		else
		{
			printf("\nEnter the elements to the matrix-\n");
			for(i=0;i<r;i++) 
				for(j=0;j<c;j++)
					scanf("%d",&a[i][j]); 
			printf("\nmatrix elements-\n");
			for(i=0;i<r;i++) 
			{
				for(j=0;j<c;j++)
					printf("\t%d",a[i][j]);
					printf("\n");
			}
			printf("\nRight diagonal of the matrix-\n");
			for(i=0;i<r;i++) 
			{
				printf("\t%d",a[i][c-1]);
				c--;
			}
			printf("\n");
		}
		return 0;
	}
			
			
				
				
