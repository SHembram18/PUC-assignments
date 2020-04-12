//PROGRAM   :To find no. of words begins & end with specific character
//FILE      :assign13_2.c
//CREATED BY:Santosh Hembram
//DATED     :04-11-19
//

	#include<stdio.h>
	#include<string.h>
	int main()
	{
		int i,j=0,k=0,count=0,l;
		char s[100],word[10],ch;

		printf("Enter a string-");
		scanf("%[^\n]",s);
	
		printf("\nView the string-");
		printf("%s",s);
		fgetc(stdin);
		printf("\nEnter a character you want to search no. of words begins and end with that character -");
		scanf("%c",&ch);

		START:
			for(i=j;s[i]!=' ';i++)	
			{
				if(s[i]=='\0')	
					break;
				else
					word[k]=s[i];
				k++;
			}
			word[k]='\0';

				if(word[0]== ch && word[k-1]==ch)
					count++;
			
			
	
			if(s[i]==' ')
			{
				j=i+1;
				k=0;
				goto START;
			}
			if(s[i]=='\0')
				goto END;
			END:
				printf("\nwords=%d begins and end with specific character",count);
		}
			
					
			
		
				
		
