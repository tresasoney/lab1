#include<stdio.h>
int fib(int f);
void main()
{
	int limit,i,f;
	printf("enter the limit");
	scanf("%d",&limit);
	printf(" The first %d numbers of a fibanocci series  is ",limit);
	for(i=0;i<limit;i++)
	
	
		
		printf("%d",fib(i));
	}
	
int fib(int limit)
	{
		if(limit==0)
			return 0;
			
		if(limit==1)
		 	return 1;
		 else
		 	return fib(limit-1)+fib(limit-2);
		 	}
