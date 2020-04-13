/*
 * PROGRAM:To print the lines containing more than 10 characters
 * FILE:assign14_2.c
 * CREATED BY:Santosh Hembram
 * DATED:06/11/19
 */
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		char string[10][50];
		int i,j,line;
		
		printf("How many lines you want:\n");
		scanf("%d",&line);

		printf("Enter the string-");
		fgetc(stdin);
		for(i=0;i<line;++i)
			fgets(string[i],50,stdin);
		
		printf("\nThe string is-\n");
		for(i=0;i<line;++i)
		printf("%s",string[i]);

		printf("\nLines containing more than 10 characters-");
		for(i=0;i<line;++i)
			if(strlen(string[i])>10)
				printf("%s",string[i]);
		return 0;
	}
