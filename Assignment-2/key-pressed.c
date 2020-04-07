//key pressed by user

	#include<stdio.h>
	#include<ctype.h>
	int main()
	{
		char ch;
		printf("Enter a key:");
		scanf("%c",&ch);

		if(isalpha(ch))
			printf("\nalphabet");
		else if(isdigit(ch))
			printf("\ndigit");
		else if(isspace(ch))
			printf("\nspace");
		 if(isprint(ch))
			printf("\nprintable");
		if(iscntrl(ch))
			printf("\ncontrol key");
	}
		
