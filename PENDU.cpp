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


int compare(const char*chain1, const char*chain2)
{
	int i=0;
	while(chain1[i] !=0 && chain2[i] !=0)
	{
		if(chain1[i] < chain2[i])
		{
			return -1;
		} else if(chain1[i]>chain2[i])
		{
			return 1;
		}
		i++;
	}
	if(chain1[i]==0 && chain2[i]==0)
	{
		return 0;
	} else if(chain1[i]==0)
	{
		return -1;
	
	} else
	{
		return 1;
	}
}

int compte_mots(const char*phrase)
{
	int compteur;
	bool dans_mot=false;
	for(int i=0; phrase[i] !=0; i++)
	{
		if(phrase[i] !=  0  && ! dans_mot)
		{
			compteur++;
			dans_mot= true;
		}  else if(phrase[i]==  0 )
		{
			dans_mot=false;
		}
	}
	return compteur;
}


void lire_phrase(const char*phrase)
{
	for(int i=0; phrase[i] != 0; i++)
	{
		std:: cout<< phrase[i];
	}
}


void lire_mot_progres(const char*mot_cache, const  char*lettres_correctes)
{
	for(int i=0; mot_cache[i] != 0; i++)
	{
		if(lettres_correctes[i]=='1')
		{
			std::cout<<" _ ";
		}
	}
	std::cout<< std::endl;
}



int main(int argc, char** argv) 
{
	const char*mot_cache="PENDU";
	char lettres_correctes[100];
	
	for(int i=0; i<100; i++)
	{
		lettres_correctes[i]=0;
		
	}
	
	char lettre;
	int essais_autorises=6;
	bool gagne=false;
	
	std::cout<<"BONJOUR, vous allez bien j'espere. Vous etes dans le jeu PENDU !"<<std::endl;
	
	while(essais_autorises > 0 && !gagne)
	{
		std::cout<<"Mot cache : ";
		lire_mot_progres(mot_cache,lettres_correctes);
		std::cout<<"Attention ! Il vous reste "<< essais_autorises << " essais" << std::endl;
		std::cout<<"Veuillez saisir une lettre MAJUSCULE \n";
		std::cin >> lettre;
		
		bool lettre_correcte=false;
		
		for(int i=0; mot_cache[i] !=0; i++)
		{
			if(mot_cache[i]== lettre)
			{
				lettres_correctes[i]='1';
				lettre_correcte=true;
			}
		}
		
		if(!lettre_correcte)
		{
			essais_autorises--;
			
			std::cout<<"Mauvais choix !"<<std::endl;
			
		}
		gagne=true;
		
		for(int i=0; mot_cache[i] !=0; i++)
		{
			if(lettres_correctes[i]== 0)
			{
				gagne=false;
				
				break;
			}
		}
	}
	
	if(gagne)
	{
		std::cout<<"Bravo ! Vous avez trouve le mot cache : PENDU " <<std::endl;
		
	}
	
	else
	{
		std::cout<<"Oups ! La partie est terminee, vous avez. Le mot cache etait :"<< mot_cache<<"."<<std::endl;
	}
	return 0;
}

