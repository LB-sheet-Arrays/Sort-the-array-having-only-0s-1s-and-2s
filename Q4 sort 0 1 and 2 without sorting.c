//TC -> O(n/2) = O(n)
//SC -> O(1)

#include<stdio.h> 

void printArray(int a[],int n)
{
	int i;
	printf(" { ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf(" } ");
	printf("\n");
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a[100],n,i;
	printf("\nHow many elements do you want in your array? => ");
	scanf("%d",&n);
	printf("\t\nPlz start filling your array one by one.");
	
	//feeding array
	for(i=0;i<n;i++)
	{
		printf("\n\nElement no. %d => ",i+1);
		scanf("%d",&a[i]);
	}

	int l=0,m=0,h=n-1;
	printf("\n\nl=%d\nm=%d,h=%d",l,m,h);
	printf("\n");	
	while(m<=h)
	{
		//if-else-if ladder isiliye taaki continuosly evaluate ho sake nhi to loop break hogi beech me
		if(a[m]==0)
		{
			swap(&a[m],&a[l]);
			printf("\nSwapped (%d,%d)",a[m],a[l]);
			l++;
			m++;
			printf("\nl=%d\nm=%d",l,m);
						
		}
		else if(a[m]==1)
		{
			m++;
			printf("\n\nm=%d",m);	
		}
		else //if(a[m]==2)
		{
			swap(&a[m],&a[h]);
			printf("\nSwapped (%d,%d)",a[m],a[h]);
			h--;
			
			//if last wala 1 hua to problem hogi, 1 will be at the place of 0. so don't increment m
			//m++;
			printf("\nm=%d,h=%d",m,h);		
		}	
	}
	
	//Printing the array!
	printf("\n The sorted array is \n\n");
	printArray(a,n);
	
return 0;
}
