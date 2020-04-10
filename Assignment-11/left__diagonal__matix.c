//prograim:Left diagonal of the matrix
//file:assign11_3.c
////created by:santosh hembram
//dated:28-10-19
//
	#include<stdio.h>
	int main()
	{
		int r,c,i,j,a[10][10];
		START:
		printf("Enter the size of the matrix:\n");
		scanf("%d%d",&r,&c);
		
		if((r!=c) || (r>10 && c>10))
		{
			printf("\nThe max size is 10x10 or you doesn't enter a square matrix\n");
			goto START;
		}
		else
		{
			printf("\nEnter the matrix elements-\n");
			for(i=0;i<r;i++)	
				for(j=0;j<r;j++)
					scanf("%d",&a[i][j]);
			
			printf("\nmatrix elelments-\n");	
			for(i=0;i<r;i++)	
			{
				for(j=0;j<r;j++)
					printf("\t%d",a[i][j]);
				printf("\n");
			}
			printf("\nLeft diagonal of the matrix-\n");
			for(i=0;i<r;i++)	
			{
				for(j=0;j<r;j++)
					if(a[i]==a[j])	
						printf("\t%d",a[i][j]);
			}
		}
	}
				
