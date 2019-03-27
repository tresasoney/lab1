#include<stdio.h>
void main()
{
  float n=7,sum=0,i,fact=1;
  for(i=1;i<=n;i++)
    {
    fact*=i;
    sum+=1/fact;
    }
  printf("The sum of 7 terms of the series is %lf",sum);
}
