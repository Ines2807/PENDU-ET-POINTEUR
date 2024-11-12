#include<iostream>


char*cherche_mot(const char*phrase, const char*mot)
{
	int i, j;
	while(phrase[i] !=0)
	{
		if(phrase[i]== mot[j])
		{
			int debut=i;
			while(phrase[i]== mot[j] && mot[j] !=0)
			{
				i++;
				j++;
			}
			if(mot[j]== 0)
			{
				return(char*)&phrase[debut];
			}
		}
		i++;
		j=0;
	}
	return NULL;
}
