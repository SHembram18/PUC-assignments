//PROGRAM   ://INDIA
//FILE      :assign13_4.c
//CREATED BY:Santosh Hembram
//DATED     :04-11-19
	#include<stdio.h>
	int main()
	{
		int 	r,i;
		char 	s[5]="INDIA";

			for(r=0;r<5;r++)
			{
				for(i=0;i<r+1;i++)
				{
					printf("%c",s[i]);
					printf(" ");
				}
				printf("\n");
			
		}
	}
