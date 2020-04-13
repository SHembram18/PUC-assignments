/*
 * PROGRAM:To delete 5th line
 * FILE:assign14_5.c
 * CRERATED BY:Santosh Hembram
 * DATED:06/11/19
 */
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		int line,i;
		char s[10][50],word[50];
			
		START:
			printf("How many lines you want:");
			scanf("%d",&line);
			
			if(line<5)
			{
				printf("Lines should be more than 5 ");
				goto START;
			}
			else
			{
				printf("Enter the string-");
				fgetc(stdin);
				for(i=0;i<line;i++)
					fgets(s[i],50,stdin);

				printf("\nView the string-\n");
				for(i=0;i<line;i++)
					printf("%s",s[i]);

				for(i=4;i<line;i++)
					strcpy(s[i],s[i+1]);

				printf("\nafter deleting the 5th line-");
				for(i=0;(i<line-1);i++)
					printf("%s",s[i]);
			}
			return 0;
	}
				

