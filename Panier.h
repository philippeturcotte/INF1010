/********************************************
* Titre: Travail pratique #2 - Panier.h
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/

#pragma once

#include <string>
#include <vector>
#include "Produit.h"

using namespace std;

class Panier
{

public:
	// TODO: Noubliez pas de retirer la capacite et donc transformer ce constructeur en constructeur par default
	Panier();
	~Panier();

	vector<Produit*> obtenirContenuPanier()const;
	int obtenirNombreContenu() const;
	double obtenirTotalApayer() const;

	void modifierTotalAPayer(double totalAPayer);

	// TODO: Adapter l'implementation de ces deux methode pour les rendre compatibles avec le nouveau vecteur
	bool ajouterProduit(Produit* produit);
	Panier*& operator+=(Produit* produit);

	void livrer();

	// TODO: Implementez la methode qui retourne le produit le plus cher du panier
	Produit* trouverProduitPlusCher();
	
	// TODO: Cette methode doit être remplacée par la surcharge de l'opérateur <<
	friend ostream& operator<<(ostream& out, const Panier& panier);


private:
	double totalAPayer_;

	// TODO: Remplacer ces attributs par un vecteur de la STL
	vector<Produit*> contenuPanier_;
};
