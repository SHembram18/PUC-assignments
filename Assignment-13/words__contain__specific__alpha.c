/*
 * PROGRAM:To print the words containing specific alphabet
 * FILE:assign13_13.c
 * CREATED BY:Santosh Hembram
 * DATED:04/11/19
 */
	#include<stdio.h>	
	int main()
	{
		char search,word[15],s[100];
		int i,l,k=0,j=0,check=0;

		printf("Enter the string-");
		scanf("%[^\n]",s);

		printf("\nThe string is:-\n");
		printf("%s\n",s);
		
		printf("\nWhich specific alphabet to search?\n");
		fgetc(stdin);
		scanf("%c",&search);

		printf("\nWords containing specific alphabet---\n");
		START:
			for(i=j;s[i]!=' ';i++)
				if(s[i]=='\0')
					break;
				else
					word[k++]=s[i];
			word[k]='\0';

			for(l=0;word[l]!='\0';l++)
				if(word[l]==search)
				{
					check=1;
					printf("%s\n",word);
					break;
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
				if(check==0)
					printf("The specific char is not found\n");
			return 0;
	}

	

