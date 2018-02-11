/********************************************
* Titre: Travail pratique #2 - main.cpp
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/

#include "Produit.h"
#include "Rayon.h"
#include "Client.h"
#include "Panier.h"
#include <string>
#include <iostream>

using namespace std;

#define NB_PRODUCTS 15

/**
*Répondez aux questions ici :
* 1/
* 2/
* 3/
**/

int main()
{
	Produit* unProduit = new Produit();

	// Faire saisir à l'utilisateur les attributs du produit unProduit selon le format de la capture d'écran de l'énoncé
	// cin >> unProduit;

	// Afficher le Produit unProduit
	cout << unProduit;

	// Creation de 15 produits
	Produit * produits[NB_PRODUCTS];
	double echantillonPrix[NB_PRODUCTS] = { 12.56, 50.0, 34.0, 56.0, 77.0, 91.0, 21.0, 34.0, 88.0, 65.0, 42.0, 72.0, 82.0, 53.0, 68.0 };

	for (int i = 0; i < NB_PRODUCTS; i++)
		produits[i] = new Produit("p" + to_string(i), i, echantillonPrix[i]);

	// Modification du nom, de la référence, du prix du troisieme produit créé
	produits[2]->modifierNom("p20");
	produits[2]->modifierPrix(100);
	produits[2]->modifierReference(31);

	cout << "Le produit p20 est moins cher que le produit p1 ? ";
	string allo = "";
	cin >> allo; 
	cout << allo;
	// Comparer le prix du produit p20 et p1 à l'aide de la surcharge d'un operateur

	// Creation d'un rayon sport
	Rayon sport(sport);

	// Modification la catégorie  du rayon
	sport.modifierCategorie("sport");

	// Ajoutez les 10 premiers produits dans le rayon créé
	for (int i = 0; i < 10; i++)
	{
		sport += produits[i];
	}

	// Ajoutez encore une fois le produit p0 dans le rayon sport
	sport += produits[0];

	// Affichez le contenu du rayon
	cout << sport << endl;

	// Affichez le nombre de doublons du premier produit dans le rayon sport
	// cout << sport.compterDoublons(produits[0]) << endl;

	// Creation d'un client
	Client martine("Bellaiche", "Martine", 1111, "H2T3A6", 199004);

	// Martine achète les 5 derniers produits
	for (int i = NB_PRODUCTS - 4 ; i <= NB_PRODUCTS; i ++)
	{
		// martine.acheter(produits[i]);
	}

	// Copie du client martine dans un autre client puis changment de son nom, prenom et identifiant pour "Paul Martin 689"
	Client paul = Client(martine);
	paul.modifierNom("Martin");
	paul.modifierPrenom("Paul");
	paul.modifierIdentifiant(689);

	cout << "Test identifiant paul: " << boolalpha << (689 == paul) << endl << endl;

	// Paul achete le produit p0
	// paul.monPanier_->acheter(produit[0]);
	// Livrez le panier de Paul
	// paul.livrerPanier
	// Affichez le panier de Paul et de Martine

	// Afichez le produit le plus cher du panier de martine

	// Terminer le programme correctement
}
