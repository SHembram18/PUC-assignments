//PROGRAM   :To count the words whose length is more than 3 
//FILE      :assign13_3.c
//CREATED BY:Santosh Hembram
//DATED     :04-11-19

	#include<stdio.h>
	#include<string.h>
	int main()
	{
		int 	i,j=0,count=0,length=0,k=0;
		char 	s[100],word[30];
			printf("Enter the string-");
			scanf("%[^\n]",s);
			printf("\nView the string-");
			printf("%s",s);
			//l=strlen(s);
			START:
			for(i=k;s[i]!=' ';i++)
			{
				if(s[i]=='\0')
					break;
				else
				
					word[j]=s[i];
					j++;
				
			}
				word[j]='\0';
				length=strlen(word);
				if(length>3)
					count++;
			
				if(s[i]==' ')
				{
					k=i+1;
					j=0;
				        
					goto START;
				}
				if(s[i]=='\0')
					goto END;
			
				END:
					printf("\nwords=%d whose length is more than 3",count);
	
	}
