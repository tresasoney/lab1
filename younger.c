#include<stdio.h>
void main()
{
	int Ramage,Shyamage,Ajayage;
	printf("Enter the ages of Ram,Shyam,Ajay:");
	scanf("%d %d %d",&Ramage,&Shyamage,&Ajayage);
	if((Ramage<Shyamage)&&(Ramage<Ajayage))
		printf("Ram is younger");
	if((Shyamage<Ramage)&&(Shyamage<Ajayage))
		printf("Shyam is younger");
	if((Ajayage<Shyamage)&&(Ajayage<Ramage))
		printf("Ajay is younger");
}



