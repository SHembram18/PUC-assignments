/*
 * PROGRAM:To search and replace a word from string
 * FILE:assign13_11.c
 * CRETAED BY:Santosh Hembram
 * DATED:04/11/19
 */

	#include<stdio.h>
	#include<string.h>
	int main()
	{
		char search[10],replace[10],word[15],s[100],new[150];
		int i,j=0,k=0,count=0,flag=1;

		printf("Enter the string-");
		scanf("%[^\n]",s);

		printf("\nView the string-");
		printf("%s",s);
	
		printf("\nWhich string to search-");
		fgetc(stdin);
		scanf("%s",&search);

		printf("\nWhich word to replace with-");
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
				flag=1;
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
			if(flag==1)
			{
				printf("\nAfter replacing the string-\n");
				puts(new);
			}
			else
				printf("\nThe string didn't match");
			return 0;
	}
			

	
