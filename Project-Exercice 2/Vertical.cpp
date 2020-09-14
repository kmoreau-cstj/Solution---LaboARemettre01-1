// But: �crire un programme qui v�rifie que le nombre entr� contient bien 5 chiffres et les affiches verticalement par la suite
// Nom: Maxym Blondin
// Date: 2020-09-14

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");
	int nombre1;
	int nombre2 = 9999;
	
	std::cout << "Veuillez entrer un nombre � 5 chiffres :";
	std::cin >> nombre1;
	// Int�gration de la variable nombre 1
	if (nombre1 >= 10000) // Cette condition permet de s'assurer que le nombre contiendra bel et bien 5 chiffres. En utilisant les variables ''plus petit ou �gal que'' et ''plus grand ou �gal que'', je peux m'assurer du bon fonctionnement du programme
		//Ouverture d'un bloc d'instruction qui sera execut� seulement si la condition est vraie
	{
		std::cout << nombre1 / 10000 <<std::endl; // L'ordinateur ne prennant pas en compte les nombres a virgules (il ne garde que l'entier), il est possible d'obtenir facilement la chiffres a la position des dizaines de miliers, et 
		std::cout << nombre1 / 1000 % 10 << std::endl;
		std::cout << nombre1 / 100 % 10 << std::endl;
		std::cout << nombre1 / 10 % 100 % 10  << std::endl;
		std::cout << nombre1 / 1 % 1000 % 100 % 10<< std::endl; // En Utilisant la variable Modulo, il est possible d'obtenir le chiffre a la position des unit�s/dizaines/centaines/miliers. En utilisant la m�thode essai-erreur, j'ai pu trouver quels facteurs utiliser dans cette variable
		//Essai 1 pour mettres les nombres sur une ligne diff�rente: \n (false)
		//Essai 2 << std::endl; (true)
	}
	else
	{	// Ouverture d'un bloc d'instruction qui sera ex�cut� seulement si la condition est fausse
		std::cout << nombre1 << " n'est pas un nombre � 5 chiffres "; 
	}
	// Plan de test
	/*
	Nombre				5 chiffres			s'affiche sur 5 lignes
	24376				oui						oui
	7898				non						non
	421					non						non
	14689				oui						oui
	32					non						non

	Plan de test termin�
	*/



}	//Fermeture du bloc d'instruction 