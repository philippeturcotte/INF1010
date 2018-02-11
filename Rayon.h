/********************************************
* Titre: Travail pratique #2 - Rayon.h
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/
#pragma once

#include <string>
#include <vector>
#include "Produit.h"

using namespace std;

class Rayon
{

public:
	Rayon(const string& cat);

	~Rayon();

	string obtenirCategorie() const;
	vector<Produit*> obtenirTousProduits() const;
	int obtenirCapaciteProduits() const;
	int obtenirNombreProduits() const;

	void modifierCategorie(const string& cat);

	// TODO: Cette methode doit etre remplacee par la surchage de l'operateur +=
	void ajouterProduit(Produit* produit);  
	Rayon& operator+=(Produit* produit);

	// TODO: Implermenter la methode compterDoublons
	int compterDoublons(const Produit*& produit);

	// TODO: Cette methode doit être remplacee par la surcharge de l'opérateur <<
	friend std::ostream& operator<<(std::ostream& out, const Rayon& rayon);

private:
	string categorie_;

	// TODO: Remplacer ces attributs par un vecteur de la STL
	vector<Produit*> tousProduits_;
};
