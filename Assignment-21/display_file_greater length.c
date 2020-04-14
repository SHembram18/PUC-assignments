/*
 * PROGRAM:To display the words of a file whose length is greater than 4
 * FILE:assign21_2.c
 * CREATED BY:Santosh Hembram
 * DATED:19/12/19
 */
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	void main()
	{
		FILE *fp;
		 char ch,word[20];
		int count=0,i,j;
				
		fp=fopen("length.txt","r");
			if(!fp)
			{
				printf("\nCan't open file");
				exit(1);
			}
			while((ch=fgetc(fp))!=EOF)
				fputc(ch,fp);
				fclose(fp);
	
		
	
	}
			
				
