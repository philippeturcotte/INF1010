/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 25 janvier 2018
* Auteurs: Philippe Turcotte - 1849836            Maxymilian Krokowski - 1899369
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
    // si le contenuPanier est vide
    
	if (contenuPanier_ == nullptr)
	{
		Produit** tableauProduit = new Produit*[1];
        
		tableauProduit[0] = produit;
        
		delete[] contenuPanier_;
        
		contenuPanier_ = tableauProduit;
        
        capaciteContenu_ = 1;
	}
    
    // si le contenuPanier est plein
    
	else if (capaciteContenu_ == nombreContenu_)
	{
		Produit** tableauProduit = new Produit*[2 * capaciteContenu_];
        
		for (int i = 0; i < nombreContenu_; i++)
            
		{
			tableauProduit[i] = contenuPanier_[i];
		}
        
		tableauProduit[nombreContenu_] = produit;
        
        for (int j=0; j < nombreContenu_; j++)
        {
            
            delete contenuPanier_[j];
            
        }
		delete [] contenuPanier_ ;
        
		contenuPanier_ = tableauProduit;
        
        capaciteContenu_ = 2 * capaciteContenu_;
	}
    
    // si il reste de lespace dans le contenuPanier
    
	else
        
	{
		contenuPanier_[nombreContenu_] = produit;
	}
    
	nombreContenu_++;
    
	totalAPayer_ = totalAPayer_ + produit->obtenirPrix();	
}

// Livrer le panier qui supprime le tableau et reinitialise

void Panier::livrer()
{
    for (int j=0; j < nombreContenu_; j++)
    {
        
        delete contenuPanier_[j];
        contenuPanier_[j] = nullptr;
        
    }
    delete [] contenuPanier_ ;
    
    contenuPanier_= nullptr;
    nombreContenu_ = 0;
    totalAPayer_ = 0;

}

