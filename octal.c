/*#include<stdio.h>
void main()
{
	int number,reverse=0,remainder,octal=0;
	printf("enter the number:");
	scanf("%d",&number);
	
	while(number!=0)
	{
		
			remainder=number%8;
			reverse=reverse*10+remainder;
			number=number/8;
	}
		while(reverse>0)
		{
			remainder=reverse%10;
			octal=octal*10+remainder;
			reverse=reverse/10;
			}
		
	printf("octal of number is %d",octal);
}
*/
#include<stdio.h>
void main()
{
	int number,digit,sum=0,equivalent=0,copy,i;
	printf("Enter the number: ");
	scanf("%d",&number);
	copy=number;
	i=1;
	while(number>0)
		{
		digit=number%8;
		sum=sum+digit*i;
		number=number/8;
		i=i*10;
		}
	
	printf("The octal equivalent of %d is %d \n",copy,sum);
}
