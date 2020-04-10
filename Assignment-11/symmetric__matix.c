//PROGRAM:check 2 matrix is symmetric
//FILE:assign11_4.c
//CREATED BY:santosh hembram
//DATED:28-09-19

	#include<stdio.h>
	int main()
	{
		int r,c,i,j,a[10][10],b[10][10],check=1;

		START:
		printf("Enter the matrix size-");
		scanf("%d%d",&r,&c);

		if((r!=c)||(r>10 && c>10))
		{
			printf("\nmax size is 10x10 or enter size is not a square matrix-\n");
			goto START;
		}
		else
		{
			printf("\nEnter the matrix elements-\n");
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
			printf("\nAfter transpose\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					b[i][j]=a[j][i];
					printf("\t%d",b[i][j]);
				}
				printf("\n");
			}
			for(i=0;i<r;i++)
				for(j=0;j<c;j++)
					if(a[i][j]!=b[i][j])
					{
						check=0;
						break;
					}
			if(check==1)
				printf("\nmatrix is symmetric");
			else
				printf("\nmatrix is not symmetric");
				
		}
		return 0;
	}
