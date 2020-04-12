//middle name
	#include<stdio.h>
	int main()
	{
		int	i,j=0,k=0,l=0;	 
		char	s[30],t[15],m[15];
		printf("Enter your name-");
		scanf("%[^\n]",s);
		
			for(i=j;s[i]!=' ';i++)
			{
				if(s[i]=='\0')
					break;
				else
					t[k]=s[i];	
					k++;
			}
			t[k]='\0';
			if(s[i]==' ')
			{
				j=i+1;
				k=0;
				
					for(i=j;s[i]!=' ';i++)
					{
						m[l]=s[i];
						l++;
		
					}
			}	
			m[l]='\0';
			printf("\nThe middle name of your name is-");
			printf("%s\n",m);
	}

		
