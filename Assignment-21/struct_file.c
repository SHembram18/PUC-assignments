#include<stdio.h>
#include<stdlib.h>
	struct student
	{
		char name[50];
		int roll;  //ph;         
   //		char gen;
  //		char adr;
	}st[100];
	void main()
	{
		int i,n;
		FILE *fp;

		fp=fopen("student_data.dat","w");
		printf("How many records?-");
		scanf("%d",&n);

		for( i=0 ; i<n ; i++)
		{
			printf("Enter the record of %d student:-\n",i+1);
			printf("Name:-");
			scanf("%s",st[i].name);
			fflush(stdin);
			printf("Roll no:-");
			scanf("%d",&st[i].roll);
			
			fwrite(&st[i],sizeof(struct student),1,fp);
		}
		fclose(fp);
		fp=fopen("student_data.dat","r");
		printf("\nDisplay the records:\n");
		for(i=1;i<=n;i++)
		{
			while(fread(&st[i],sizeof(struct student),1,fp)==1)
				
			printf("\nName:%s\t Roll no:%d\n",st[i].name,st[i].roll);
				
		
		}
		fclose(fp);
	}

		
