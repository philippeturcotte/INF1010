/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 25 janvier 2018
* Auteur: Philippe Turcotte - 1849836
*******************************************/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "Rayon.h"

// Initiation du constructeur par default
Rayon::Rayon()
	: categorie_("inconnu"), tousProduits_(nullptr), capaciteProduits_(0),nombreProduits_(0)
{
}

// Initiation du constructeur pour l'attribut categorie
Rayon::Rayon(string categorie)
	: categorie_(categorie), tousProduits_(nullptr), capaciteProduits_(0), nombreProduits_(0)
{
}

// Methode d'acces aux attributs
string Rayon::obtenirCategorie() const
{
	return categorie_;
}

Produit** Rayon::obtenirTousProduits() const
{
	return tousProduits_;
}

int Rayon::obtenirCapaciteProduits() const
{
	return capaciteProduits_;
}

int Rayon::obtenirNombreProduits() const
{
	return nombreProduits_;
}

// Methode de modification de l'attribut categorie
void Rayon::modifierCategorie(string categorie)
{
	categorie_ = categorie;
}

// Ajout d'un pointeur de produit
void Rayon::ajouterProduit(Produit* produit) 
{
	if (tousProduits_ = nullptr)
	{
		Produit** tableauProduit = new Produit*[5];
		tableauProduit[1] = produit;
	}
	else if (capaciteProduits_ = nombreProduits_)
	{
		Produit** tableauProduit = new Produit*[capaciteProduits_ + 5];
		for 
	}
	else
		capaciteProduits_[capaciteProduits_] = produit;
	= produit;
	nombreContenu_++;
	totalAPayer_ = totalAPayer_ + produit->obtenirPrix;

}

// Afficher les attributs du constructeur
void afficherProduit(Rayon rayon)
{
	cout << rayon.obtenirCategorie() << rayon.obtenirTousProduits() << rayon.obtenirCapaciteProduits() << rayon.obtenirNombreProduits;
}