#include<iostream>


void supprime_caractere(char*chaine, char caractere)
{
	int i, j;
	while(chaine[j] !=0)
	{
		if(chaine[i] != caractere)
		{
			chaine[i]=chaine[j];
			i++;
		}
		j++;
	}
	chaine[i]=0;
}

void lire_chaine(const char*chaine)
{
	for(int i=0; chaine[i] != 0; i++)
	{
		std:: cout<< chaine[i];
	}

}	

int  main(int argc, char** argv) 
{
	char chaine[150];

   
   std:: cout<<"Veuillez entrer une chaine de caracteres de votre choix : ) \n";
   std:: cin.getline(chaine,150 );
   std:: cout<<"Votre chaine de caracteres est: \" ";
   lire_chaine(chaine);
   std:: cout<<" \" "<< std::endl;
   
   supprime_caractere(chaine,'a');
   
   std:: cout<<"Votre chaine de caracteres devient : \" "<<chaine << std::endl;
   
   return 0;
}
