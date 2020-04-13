
/*
 * PROGRAM:  {call-by-reference}
 * FILE:assign17_1.c
 * CREATED BY:Santosh Hembram[OwNeR Of ThE COdE]
 * DATED:
 */
	#include<stdio.h>
	
	void search_delete(int *p,int *s)
	{
		int num,j=0,i;

		printf("\nEnter the number you want to delete:-\n");
		scanf("%d",&num);

		for(i=0;i<*s;i++)
		{
			if(*(p+i)==num)
			{
				for(j=i;j<*s;j++)
					*(p+j)=*(p+j+1);
					(*s)--;
			
			}		
		}
	}
	void delete_duplicate(int *p,int *s)
	{
		int i,j,k;
		for(k=0;k<*s;k++)
		{
			for(i=0;i<*s;i++)
			{
				for(j=i+1;j<*s;j++)
				{
					if(*(p+i)==*(p+j))
					{
						for(;j<*s;j++)
						*(p+j)=*(p+j+1);
						(*s)--;
					}
				}
			}
		}
	}
	void union_operation(int *uni,int *s)
	{
		int i,size2,arr2[10],j,union_arr[20],k,range=0,count=0,l,m,n;
		printf("\nEnter the size of 2nd array:-[max size : 10]\n");
		scanf("%d",&size2);

		printf("\nEnter the data to the 2nd array:-\n");
		for(j=0;j<size2;j++)
			scanf("%d",&arr2[j]);

		printf("\nDisplay the 2nd array:-\n");
		for(j=0;j<size2;j++)
			printf("\t%d",arr2[j]);

		range=(*s) + size2;

		for(i=0,k=0;i<*s;i++,k++)
		{
			union_arr[k]=*(uni+i);
			count++;
		}
		for(j=0,k=count;j<size2;j++,k++)
			union_arr[k]=arr2[j];		

		for(l=0;l<range;l++)
		{
			for(k=0;k<range;k++)
			{
				for(m=k+1;m<range;m++)
				{
					if(union_arr[k]==union_arr[m])
				{
						for(;m<range;m++)
						union_arr[m]=union_arr[m+1];
						range--;
					}
				}
			}
		}
	*s=range;
	for(m=0,i=0;m<range;m++,i++)
		*(uni+i)=union_arr[m];
	}        
	int check_even_odd(int *ptr,int *s)  
	{
		int  i,count=0;
		for(i=0;i<*s;i++) 
		{
			if(*(ptr+i)%2==0) 
			count++;
		}
		return count;
	} 
	int copy_even_odd(int *ptr,int *s,int *even_arr,int *odd_arr)
	{
		int i,j=0,k=0,even[10],odd[10],range=0;
		for(i=0;i<*s;i++)
		{
			if(*(ptr+i)%2==0)
			{
				*(even_arr+j)=*(ptr+i);
					j++;
			}
			else
			{
				*(odd_arr+k)=*(ptr+i);
					k++;
			}
		}
		range=j;
		return range;
		
		
		
	}
	int odd_num_divisible_by_3(int *ptr,int *s)
	{
		int i,count=0;
		for(i=0;i<*s;i++)
		{
			if(*(ptr+i)%2==1 && *(ptr+i)%3==0)
				count++;
		}
		return count;
	}
	float percentage(int *ptr,int *s)
	{
		int i,total=0,Total_mark=0;
		float	percent=0;
		for(i=0;i<*s;i++)
		{
			total=(total + (*(ptr+i)));
		}
		Total_mark= (*s * 100);
		percent=((total*100)/Total_mark);
		
		
		return percent;
	}	

	
	int main()
	{
		int a[10],i,size,even=0,odd,even_arr[10],odd_arr[10],j,k,range_cp;
		float per;
		printf("Enter the size of the array //max size[10]:-\n");
		scanf("%d",&size);
		
		printf("\nEnter data to the array:-\n");
		for(i=0;i<size;i++)
		scanf("%d",a+i);

		printf("\nDisplay the elements of the array:-\n");
		for(i=0;i<size;i++)
		printf("\n%d",*(a+i));
		
		per=percentage(a,&size);
		printf("\nPercentage secured by the student= %.2f\n",per);

		even=check_even_odd(a,&size);
		printf("\nEven = %d\n",even);
		printf("\nOdd = %d\n",size-even);
		
		odd=odd_num_divisible_by_3(a,&size);
		printf("\nThe odd number which are divisible by 3 = %d\n",odd);
		

		range_cp=copy_even_odd(a,&size,even_arr,odd_arr);
		printf("\nEven_array:-\n");
		for(j=0;j<range_cp;j++)
		printf("\n%d",*(even_arr+j));
		printf("\nOdd_array:-\n");
		for(k=0;k<size-range_cp;k++)
		printf("\n%d",*(odd_arr+k));
		
		delete_duplicate(a,&size);
		printf("\nAfter deleting the duplicate:-\n");
		for(i=0;i<size;i++)
		printf("\n%d",*(a+i));


		search_delete(a,&size);
		printf("\nAfter deletion :-\n");
		for(i=0;i<size;i++)
		printf("\n%d",*(a+i));


		union_operation(a,&size);
		printf("\nDisplay the union element:-\n");
		for(i=0;i<size;i++)
		printf("\n%d",*(a+i));     		
	
	}
	
		
		


		



	


		
