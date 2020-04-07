//alpha numeric or not

	#include<stdio.h>
	int main()
	{
		char ch;
		printf("Enter a character:");
		scanf("%c",&ch);

		if((ch>=65 && ch<90 || ch>=97 && ch<=122) || ch>=48 && ch<=57)
			printf("\nEntered character is an alpha numeric");
		else
			printf("\nEntered character is not an alpha numeric ");
	}
