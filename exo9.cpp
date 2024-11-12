#include<iostream>


void sous_chaine(const char*source, char*dest, int debut, int longueur)
{
	int i;
	while(i<longueur && source[debut+i] !=0)
	{
		dest[i]= source[debut+i];
		i++;
	}
	dest[i]= 0;
}


