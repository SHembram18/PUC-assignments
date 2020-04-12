/*
 * program:To print the ASKII equivalent of each character of a string
 * file:assign13_!4.c
 * created by:santosh hembnram
 * dated:04/11/19
 */
	#include<stdio.h>
	int main()
	{
		char s[10][30];
		int i,j,n;

		printf("How many lines you want to input:");
		scanf("%d",&n);
	
		printf("\nEnter the string-");
		fgetc(stdin);
		for(i=0;i<n;i++)
			fgets(s[i],30,stdin);

		printf("\nThe string is-");
		for(i=0;i<n;i++)
			printf("%s",s[i]);

		printf("\nASCII Equivalent\n");
		printf("character \tascii code\n");
		for(i=0;i<n;i++)
			for(j=0;s[i][j]!='\0';j++)
				if(s[i][j]!=10)
					printf("%c\t\t%d\n",s[i][j],s[i][j]);
		return 0;
	}
		
		
