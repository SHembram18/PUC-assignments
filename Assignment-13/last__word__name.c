//PROGRAM   :Print the last word of your name
//FILE      :assign13_6.c
//CREATED BY:SANTOSH HEMBRAM
//DATED     :04-11-19

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int main()
	{
		int i=0,j,l;
		char s[30];

		printf("Enter your name-");
		scanf("%[^\n]",s);
		l=strlen(s);
		for(i=l-1;i>0;i--)
		{
			if(s[i]==' ')
			{
				for(j=i+1;j<l;j++)
				{
					printf("%c",s[j]);
				}
				exit(0);
			}
		}
		
	}
			
		
