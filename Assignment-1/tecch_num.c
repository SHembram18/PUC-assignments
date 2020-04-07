#include<stdio.h>
	int main()
	{
		int techN,f1,f2,num;
		printf("enter four digit number:");
		scanf("%d",&num);
		if(num>=1000 && num<=9999)
		{
			printf("\n%d is a four digit number", num);
			f1=num/100;
			f2=num%100;
			techN=(f1+f2)*(f1+f2);
			if(num==techN)
			
			printf("\n%d is a technumber",num);
	
			else
	
				printf("\n%d is not a technumber",num);
	
		}
		else
	
			printf("\n%d is not a four digit number",num);
	
	return 0;
	}
