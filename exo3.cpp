#include<iostream>


void concatene(char*dest, const char*source)
{
	int i=0;
	while(dest[i] !=0)
	{
		i++;
	}
	int j=0;
	while(source[i] !=0)
	{
		i++;
		j++;
	}
	
	dest[i]=0;
}
