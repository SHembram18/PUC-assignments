//PROGRAM:lower triangle of the matrix
//FILE:assign11_1.c
//CREATD BY:SANTOSH HEMBRAM
//DATED:28/10/19

	#include<stdio.h>
	int main()
	{	
		
			int r,c,i,j,a[10][10];

			START:
			printf("Enter the matrix size:");
			scanf("%d%d",&r,&c);
			
			if((r!=c) || (r>10 && c>10))
			{
				printf("\nEntered size is more than 10x10 or not a square matrix\n");
				goto START;
			}
			else
			{
				printf("\nEnter the elements of the matrix-\n");
				for(i=0;i<r;++i)
					for(j=0;j<c;++j)
						scanf("%d",&a[i][j]);
				printf("\nElements of matrix-\n");
				for(i=0;i<r;++i)
				{
					for(j=0;j<c;++j)
						printf("\t%d",a[i][j]);
						printf("\n");
				}
					
				printf("\nLower triangle of the matrix:\n");	
				for(i=0;i<r;++i)
				{
					for(j=0;j<=i;++j)	
						printf("\t%d",a[i][j]);
						printf("\n");
				}
			}
		return 0;
	}
