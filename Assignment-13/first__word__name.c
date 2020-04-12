/*
 *PROGRAM   :Print the first word of your name
 *FILE      :assign13_5.c
 *CREATED BY:Santosh Hembram
 *DATED     :04-11-19
 */
	#include<stdio.h>
	int main()
	{
		int i;
		char s[100];

		printf("Enter your name-");
		scanf("%[^\n]",s);
		
		for(i=0;s[i]!=' ';i++)
			printf("%c",s[i]);
	}
