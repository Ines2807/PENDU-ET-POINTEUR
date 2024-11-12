#include<iostream>


int compte_mots(const char*phrase)
{
	int compteur;
	bool dans_mot=false;
	for(int i=0; phrase[i] !=0; i++)
	{
		if(phrase[i] != ' ' && ! dans_mot)
		{
			compteur++;
			dans_mot= true;
		}  else if(phrase[i]== ' ')
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

int main(int argc, char** argv) 
{
   char phrase[100];
   
   std:: cout<<"BONJOUR, vous allez bien ? Veuillez entrer une phrase de votre choix : ) \n";
   std:: cin.getline(phrase,100);
   std:: cout<<"Votre phrase est: \" ";
   lire_phrase(phrase);
   std:: cout<<" \" "<< std::endl;
   
   int nombre_mots=compte_mots(phrase);
   
   std:: cout<<"Elle contient "<<nombre_mots << " mots"<< std::endl;
   
   return 0;

}
