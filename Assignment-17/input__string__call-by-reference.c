/*
 * PROGRAM:Input a string & performing task using call-by-reference
 * FILE:assign17_2.c
 * CREATED BY:Santosh Hembram
 * DATED:29/11/19
 */
	#include<stdio.h>
	#include<string.h>
	void count(char *str)
	{
		char ch,word[20];
		int i,j=0,k,m=0,count=0;
		printf("\n\tTo print number of words containing specific characters at any position:\n");
		fgetc(stdin);
		printf("Enter the character to search:");
		scanf("%c",&ch);
		START:
		for( i=j ; *(str+i)!=' ' ; i++)
		{
			if(*(str+i)=='\0')
				break;
			else
				word[m++]=*(str+i);
		}
		word[m]='\0';
		if(*(str+i)==' ')	
		{
			for( k=0 ; k<m ; k++)
				if(*(word+k)==ch)
				{
					count++;
					printf("\nThe word is %s:\n",word);
					break;
				
				}
			j=i+1;
			m=0;
			goto START;
		}
		else if(*(str+i)=='\0')
		{
			for( k=0 ; k<m ; k++)	
				if(*(word+k)==ch)	
				{
					count++;
					printf("\nThe word is %s:\n",word);
					break;
				}
			goto end;
		}
		end:
			printf("\nNo. of words having %c are %d",ch,count);
	}
	void insert(char *str)
	{
		char word[20],st[100];
		int i,m=0;
		strcpy(st,str);
		printf("\n\tInsert a word into exisiting string:\n");
		fgetc(stdin);
		printf("\nEnter the word:");
		scanf("%s",word);
	
		strcat(st," ");
		strcat(st,word);
		printf("\nAfter insertion:");
		puts(st);
	}
	void last(char *s)
	{
		char a[100],word[20];
		int i,j=0,m=0;
		strcpy(a,s);
		printf("\n\tTo print the last word of the string:\n");
		START:
		for( i=j ; a[i]!=' ' ; i++)
		{
			if(a[i]=='\0')
				break;
			else
				word[m++]=a[i];
		}
		word[m]='\0';
		if(a[i]==' ')
		{
			j=i+1;
			m=0;
			goto START;
		}
		else if(a[i]=='\0')
		{
			goto end;
		}
		end:
			fgetc(stdout);
			printf("\nThe last word of the string is :\n");
			for( i=0 ; i<strlen(word) ; i++)
				printf("%c",word[i]);
	}
	void specific(char *s)
	{
		char a[100],word[20],ch,ar[100];
		strcpy(a,s);
		printf("\n\tTo remove the word  having specific character:");
		int i,m=0,j=0,count=0;
		printf("\nEnter the character want to delete :");
		fgetc(stdin);
		scanf("%c",&ch);
		
		START:
		for( i=j ; a[i]!=' ' ; i++)
		{
			if(a[i]=='\0')
				break;
			else
				word[m++]=a[i];
		}
		word[m]='\0';
		if(a[i]==' ')	
		{
			if(word[0]!=ch)
			{
				strcat(ar,word);
				strcat(ar," ");
			}
			j=i+1;
			m=0;
			goto START;
		}
		else if(a[i]=='\0')
		{
			if(word[0]!=ch)
			{
				strcat(ar,word);
				strcat(ar," ");
			}
			goto end;
		}
		end:
			fgetc(stdout);
			for( i=0 ; i<strlen(ar) ; i++)
				printf("%c",ar[i]);
	}
	void concardinate(char *s)
	{
		char ar[100];
		int i,m=0;
		printf("\n\tTo concardinate two string:\n");
		printf("\nEnter the string:\n");
		fgetc(stdin);
		scanf("%[^\n]",ar);
		strcat(s," ");
		strcat(s,ar);
		printf("\nAfter concardinate:\n ");
		puts(s);
	}
	int main()
	{
		char str[100];
		printf("Enter the string:\n");	
		scanf("%[^\n]",str);	
		count(str);
		last(str);
		insert(str);
		specific(str);
		concardinate(str);
	}
			

		
	
