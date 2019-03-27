#include<stdio.h>
float product(int num1,float num2);
 void main()
{
	int num1;
	float num2,r;
	printf("Enter the integer number and float number:");
	scanf("%d %f",&num1,&num2);
	r= product(num1,num2);
	printf("product = %f",r);
}

float product(int num1,float num2)
{
	float product;
	product=num1*num2*1.0;
	return product;
}




