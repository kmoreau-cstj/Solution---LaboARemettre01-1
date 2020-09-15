// FR : But: Écrire un programme qui vérifie que le nombre entré contient bien 5 chiffres et les affiches verticalement par la suite
// Nom: Maxym Blondin
// Date: 2020-09-14

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");
	int nombre1;
	int nombre2 = 9999;
	
	std::cout << "Veuillez entrer un nombre à 5 chiffres :";
	std::cin >> nombre1;
	// Intégration de la variable nombre 1
	if (nombre1 >= 10000) // Cette condition permet de s'assurer que le nombre contiendra bel et bien 5 chiffres. En utilisant les variables ''plus petit ou égal que'' et ''plus grand ou égal que'', je peux m'assurer du bon fonctionnement du programme
		//Ouverture d'un bloc d'instruction qui sera executé seulement si la condition est vraie
	{
		// KM : Ici on n'est pas encore sûr que le nombre a bien seulement 5 chiffres. Il manque un test
		std::cout << nombre1 / 10000 <<std::endl; // FR : L'ordinateur ne prennant pas en compte les nombres a virgules (il ne garde que l'entier), il est possible d'obtenir facilement la chiffres a la position des dizaines de miliers, et 
		std::cout << nombre1 / 1000 % 10 << std::endl;
		std::cout << nombre1 / 100 % 10 << std::endl;
		std::cout << nombre1 / 10 % 100 % 10  << std::endl;
		std::cout << nombre1 / 1 % 1000 % 100 % 10<< std::endl; // En Utilisant la variable Modulo, il est possible d'obtenir le chiffre a la position des unités/dizaines/centaines/miliers. En utilisant la méthode essai-erreur, j'ai pu trouver quels facteurs utiliser dans cette variable
		//FR : Essai 1 pour mettres les nombres sur une ligne différente: \n (false)
		// KM : Oui cela fonctionne avec \n, il faut mettre le \n entre guillemets => std::cout << "\n";
		//Essai 2 << std::endl; (true)
	}
	else
	{	// Ouverture d'un bloc d'instruction qui sera exécuté seulement si la condition est fausse
		std::cout << nombre1 << " n'est pas un nombre à 5 chiffres "; 
	}
	// Plan de test
	// Et un nombre avec plus de 5 chiffres ? et un nombre négatif et 0 ???
	/*
	Nombre				5 chiffres			s'affiche sur 5 lignes
	24376				oui						oui
	7898				non						non
	421					non						non
	14689				oui						oui
	32					non						non

	Plan de test terminé
	*/



}	//Fermeture du bloc d'instruction 
