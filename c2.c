#include<stdio.h>

int m
ain()
{
	int n,i,j,temp,position;
	printf("How many elements to be sorted?");
	scanf("%d",&n);
	int arr[n];
	printf("\n enter elements");
	for(i=0;i<n;i++);
	    scanf("%d",&arr[i]);
	    
    for(i=0;i<n;i++);
    {
    	position=i;
    	
    	for(j=i+1;j<n;j++)
    	{
    		if(arr[position]>arr[j])
    		{
    			position=j;
    		}
    		
		}
		if (position!=1)
		{
			temp=arr[i];
			arr[i]=arr[position];
			arr[position]=temp;
	    }
	}
	printf("\n sorted elements using bubble sort are\n");
	for(i=0;i<n;i++)
	printf("\n%d",arr[i]);
	return 0;
}
	   
		
			
		
  
	

