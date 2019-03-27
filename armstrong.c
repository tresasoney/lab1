#include<stdio.h>
void main()
{
	int i,arm=0,remainder,temp;

	for(i=100;i<=500;i++){
		temp=i;
		arm=0;
		while(temp>0){
			remainder=temp%10;
			arm=arm+(remainder*remainder*remainder);
			temp=temp/10;}
			
		
		if(i==arm)
			printf("\n%d is a armstrong number",i);
			}
}
		

