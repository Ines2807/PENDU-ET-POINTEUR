#include<iostream>


void to_upper(char*chaine)
{
	int i;
	while(chaine[i] !=0 )
	{
		if(chaine[i] >='a' && chaine[i]<='z')
		{
			chaine[i]-=32;
		}
		i++;
	}
}

void to_lower(char*chaine)
{
	int i=0;
	while(chaine[i] !=0 )
	{
		if(chaine[i]>= 'A'&& chaine[i]<= 'Z')
		{
			chaine[i] +=32;
		}
		i++;
	}
}


void lire_chaine(const char*chaine)
{
	for(int i=0; chaine[i] != 0; i++)
	{
		std:: cout<< chaine[i];
	}
}


int main(int argc, char** argv) 
{

char chaine[100];
   
   std:: cout<<"Entrez une chaine de caracteres de votre choix : ) \n";
   std:: cin.getline(chaine,100);
   std:: cout<<"La chaine de caracteres initiale est: \" ";
   lire_chaine(chaine);
   std:: cout<<" \" "<< std::endl;
   
  to_upper(chaine);
  std:: cout<<"Votre chaine de caracteres en majuscules est:"<< chaine<< std::endl;
  
  to_lower(chaine);
  std:: cout<<"Votre chaine de caracteres en minuscules est:"<< chaine<< std::endl;
   
  return 0;
}
