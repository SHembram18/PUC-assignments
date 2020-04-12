/*
 * PROGRAM   :To print your surname first in your name
 * FILE      :assign13_10.c
 * CREATED BY:Santosh Hembram
 * DATED     :04-11-19
 */

	#include<stdio.h>
	int main()
	{
		char l_name[30],s[50];
		int i,j,sp=0,pos,last=0;

		printf("Enter your name-");
		scanf("%[^\n]",s);

		printf("\nView your name-");
		printf("%s",s);

		printf("\nDispaly surname first in your name-");
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]==' ')
			{
				pos=i;
				j=i+1;
				sp++;
			}
			if(sp==2)
				last++;
		}
		for(i=0;i<last;i++)
			l_name[i]=s[j++];
		s[pos]='\0';
		printf("%s %s\n",l_name,s);
		return 0;
	}
		
		
