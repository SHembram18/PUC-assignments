/*
 * PROGRAM:To print each line in reverse order
 * FILE:assign14_1.c
 * CREATED BY:Santosh Hembram
 * DATED:06/11/19
 */
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		char s[10][50];
		int line,i,j;

		printf("How many lines you want:");
		scanf("%d",&line);

		printf("\nEnter the string-\n");
		fgetc(stdin);
		for(i=0;i<line;i++)
			fgets(s[i],50,stdin);
		
		printf("\nBefore reverse the string is-\n");
		for(i=0;i<line;i++)
			printf("%s",s[i]);

		printf("\nAfter reverse the string is-\n");
		for(i=0;i<line;i++)
			for(j=strlen(s[i])-1;j>=0;j--)
				printf("%c",s[i][j]);
				printf("\n");

		return 0;
	}
		
