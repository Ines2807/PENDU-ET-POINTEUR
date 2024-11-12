#include<iostream>


void inverse(char*chaine)
{
	int debut=0;
	int fin=0;
	while (chaine[fin] !=0 )
	{
		fin++;
	}
	fin--;
	while(debut<fin)
	{
		char temps=chaine[debut];
		chaine[debut]=chaine[fin];
		chaine[fin]=temps;
		debut++;
		fin--;
	}
}
