/*
 * PROGRAM:To search specific word in each line present in a string
 * FILE:assign14_3.c
 * CREATED BY:Santosh Hembram
 * DATED:06/11/19
 */
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		char s[10][50],word[10],search[10];
		int line,i,k,l=0,m=0;

		printf("How many lines you want:");
		scanf("%d",&line);

		printf("\nEnter the string-");
		fgetc(stdin);
		for(i=0;i<line;i++)
			fgets(s[i],50,stdin);

		printf("\nThe string is-");
		for(i=0;i<line;i++)
			printf("%s",s[i]);

		printf("\nWhich word to search:");
		scanf("%s",search);

		i=0;
		START:
		for(k=l;s[i][k]!=' ';k++)
			if(s[i][k]=='\0')
				break;
			else if(s[i][k]!='\n')
				word[m++]=s[i][k];
				word[m]='\0';
	
			if(strcmp(word,search)==0)
				printf("\n%s is found in line %d",search,i+1);

			if(s[i][k]==' '||s[i][k]=='\0')
			{
				if(s[i][k]=='\0')
				{
					if(i==(line-1))
						goto END;
					else
					{
						i++;
						l=0;
						m=0;
						goto START;
					}
				}
				else
				{
					l=k+1;
					m=0;
					goto START;
				}
			}
			END:
			printf("\n");
			
			return 0;
	}

			
		
