#include<iostream>

char* cherche_char(const char *chaine , char caractere)
{
	int i;
	while(chaine[i] !=0)
	{
		if(chaine[i] == caractere)
		{
			return(char*)&chaine[i];
		}
		i++;
	}
	return NULL;
}
