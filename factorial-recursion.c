
#include<stdio.h>
int fact(int n);
void main()

{
	int number,f;
	printf("enter the number");
	scanf("%d",&number);
	f=fact(number);
	printf("factorial =%d",f);
	}
	
int fact(int number)
	{int factorial=1;
	
		if(number==1)
			return 1;
				
				
		else
			
			
			return number*fact(number-1);
			}
