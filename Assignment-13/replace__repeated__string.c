/*PROGRAM:Replace the repeated occurence of specific string
 * FILE:assign13_12.c
 * CREATED BY:Santosh Hembram
 * DATED:04/11/19
 */
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		char search[10],replace[10],word[15],s[100],new[150];
		int i,k=0,j=0,count=0,check=0;

		printf("Enter the string-\n");
		scanf("%[^\n]",s);

		printf("\nView the string-\n");
		printf("%s",s);
		
		printf("\nWhich string to search?\n");
		fgetc(stdin);
		scanf("%s",&search);

		printf("\nWhich word to replace with?\n");
		fgetc(stdin);
		scanf("%s",&replace);

		START:
			for(i=j;s[i]!=' ';i++)
				if(s[i]=='\0')
					break;
				else
					word[k++]=s[i];
				word[k]='\0';

			if(strcmp(word,search)==0)
			{
				check=1;
				strcat(new,replace);
				strcat(new," ");
			}
			else
			{
				strcat(new,word);
				strcat(new," ");
			}
			if(s[i]==' ')
			{
				j=i+1;
				k=0;
				goto START;
			}	
			else if(s[i]=='\0')
				goto END;
			END:
				if(check==1)	
				{
					printf("\nAfter replacing the string:-\n");
					puts(new);
				}
				else
					printf("\nThe string didn't match\n");

				return 0;
	}
