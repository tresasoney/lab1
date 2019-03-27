#include<stdio.h>
float sum(int mark1,int mark2,int mark3);
void main()

{
	int mark1,mark2,mark3;
	printf("enter the marks:");
	scanf("%d %d %d",&mark1,&mark2,&mark3);
	sum(mark1,mark2,mark3);
}

float sum(int mark1,int mark2,int mark3)
{
	int sum;
	float average,percentage;
	sum=mark1+mark2+mark3;
	percentage=(sum*100)/100;
	average = sum/3;
	printf("sum=%d",sum);
	printf("average=%f",average);
	printf("percentage=%f",percentage);
}
