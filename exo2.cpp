#include<iostream>


void copie(char*dest,const char*source)
{
	int i=0;
	while (source[i] !=0)
	{
		dest[i]=source[i];
		i++;
		
	}
	dest[i]=0;
	
	
}

int main()
{
	char source[]="pendu_concu";
	char dest[150];
	
	copie(dest, source);
	for(int i=0; dest[i] !=0; i++)
	{
		
		
	}
	return 0;
}
