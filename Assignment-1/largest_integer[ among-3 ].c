#include<stdio.h>
	int main()
	{
		int a,b,c;
		printf("enter any three integer:");
		scanf("%d%d%d",&a,&b,&c);
		if(a>c)
		{
			if(a>b)
				printf("\n%d is the largest among three integer ",a);
	
			else	
				printf("\n%d is the largest among three integer",b);
		}
 		else
		{
			if(b>c)
				printf("\n%d is the largest among three integer",b);

			else
		
				printf("\n%d is the largest among three integer",c);
		}
	}		
