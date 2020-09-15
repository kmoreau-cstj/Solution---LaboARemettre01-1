// But: Déterminer si le nombre entier choisi est pair ou impair
// Auteur: Maxym Blondin
// Date: 2020-09-14

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	int nombre1;
	// KM : Attention au vocabulaire employé : int veut dire integer pour entier. Ici il s'agit d'une déclaration de variable.
	// Intégration de la variable nombre 1
	std::cout << "Veuillez entrer un nombre entier :";
	// Message qui sera affiché pour l'utilisateur


	std::cin >> nombre1;
	if (nombre1 % 2 ==0) // Si le nombre obtient un résultat de 0 lorsqu'il est modulo 2, le nombre est pair. Dans tous les autres cas, il est inévitablement impair
		//Ouverture d'un bloc d'instruction qui sera executé seulement si la condition est vraie
	{
		std::cout << nombre1 << " est un nombre pair. ";
	}

	else
	{	// Ouverture d'un bloc d'instruction qui sera exécuté seulement si la condition est fausse
		std::cout << nombre1 << " n'est pas un nombre pair";
	}
	// Plan de test:
	// KM : Bon plan de tests avec de nombreuses valeurs. PEnse à mettre des valeurs négatives et 0 aussi !
	/*
		Nombre				Pair ou Impair 
		6						Pair
		7						Impair
		19						Impair
		20						Pair	
		3						Impair
	*/


}	//Fermeture du bloc d'instruction 
