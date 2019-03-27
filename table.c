#include<stdio.h>
void main()
{
   int i=1,number,product;
	printf("enter the number");
	scanf("%d",&number);
	while(i<=10)
	{
		product=number*i;
		printf("%d*%d=%d",number,i,product);
		printf("\n");
		i++;
	}
}
