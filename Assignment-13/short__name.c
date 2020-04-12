/*
 * PROGRAM   :Print the short name of your name
 * FILE      :assign13_9.c
 * CREATED BY:Santosh Hembram
 * DATED     :04-11-19
 */
	#include<stdio.h>
	int main()
	{
		char word[15],s[50];
		int i,k=0,j=0;
		printf("Enter your name-");
		scanf("%[^\n]",s);
		printf("\nView your name-");
		printf("%s\n",s);
		START:
			for(i=j;s[i]!=' ';i++)
				if(s[i]=='\0')
					break;
				else
					word[k++]=s[i];
			word[k]='\0';
			
			printf("%c",word[0]);
			if(s[i]==' ')
			{
				j=i+1;
				k=0;
				goto START;
			}
			else if(s[i]=='\0')
				goto END;
		END:
			printf("\n");
		return 0;
	}
