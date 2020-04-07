//To find whether the candidate is elgible for professional course or not 

	#include<stdio.h>
	int main()
	{
		int Math,Phy,Chem,Total;
		printf("Enter the marks of Math,Phy,Chem:");
		scanf("%d%d%d",&Math,&Phy,&Chem);
	
		if(Math>=60 && Phy>=50 && Chem>=40)
		{
			if(Total>=200 || Math+Phy>=150)
				printf("\nThe candidate is elgible for the professional course");
		}
		else
			printf("\nSORRY,the candidate is not elgible for the professional course");
	}
		
