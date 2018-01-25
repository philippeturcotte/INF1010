/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 25 janvier 2018
* Auteur: Philippe Turcotte - 1849836
*******************************************/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "panier.h"

// Initiation du constructeur par valeur
Panier::Panier(int capacite)
	: capaciteContenu_(capacite), contenuPanier_(nullptr), nombreContenu_(0), totalAPayer_(0)
{
	contenuPanier_ = new Produit*(nullptr);
}

// Methode d'acces aux attributs
Produit** Panier::obtenirContenuPanier() const
{
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const
{
	return nombreContenu_;
}

double Panier::obtenirTotalAPayer() const
{
	return totalAPayer_;
}

// Ajout d'un pointeur de produit
void Panier::ajouterProduit(Produit* produit)
{
	if (contenuPanier_ == nullptr)
	{
		Produit** tableauProduit = new Produit*[1];
		tableauProduit[1] = produit; 
		delete[] contenuPanier_;
		contenuPanier_ = tableauProduit;
	}
	else if (capaciteContenu_ == nombreContenu_)
	{
		Produit** tableauProduit = new Produit*[2 * capaciteContenu_];
		for (int i = 0; i < nombreContenu_; i++)
		{
			tableauProduit[i] = contenuPanier_[i];
		}
		tableauProduit[nombreContenu_] = produit;
		delete [] contenuPanier_ ;
		contenuPanier_ = tableauProduit;
	}
	else
	{
		contenuPanier_[nombreContenu_] = produit;
	}
	nombreContenu_++;
	totalAPayer_ = totalAPayer_ + produit->obtenirPrix;	
}

// Livrer le panier qui supprime le tableau et reinitialise
void livrer();
{
	

}

