/*
 * PROGRAM:To insert 2nd line in 2D array
 * FILE:assign14_4.c
 * CREATED BY:Santosh Hembram
 * DATED:06//11/19
 */
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		char s[10][50],word[50];
		int line,i;

		START:
			printf("How many lines you want:");
			scanf("%d",&line);

			if(line<2)
			{
				printf("Atleast give lines more than 2");
				goto START;
			}
			else
			{
				printf("Enter the string-");
				fgetc(stdin);
				for(i=0;i<line;i++)
					fgets(s[i],50,stdin);

				printf("\nThe string is-");
				for(i=0;i<line;i++)
					printf("%s",s[i]);

				printf("\nEnter the string to insert in 2nd line-\n");
				fgets(word,50,stdin);
				for(i=line;i>1;i--)
					strcpy(s[i],s[i-1]);

				strcpy(s[i],word);

				printf("\nNEW STRING-");
				for(i=0;i<(line+1);i++)
					printf("%s",s[i]);
			}
			return 0;
		}
