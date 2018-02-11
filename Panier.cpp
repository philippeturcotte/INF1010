/********************************************
* Titre: Travail pratique #2 - Panier.cpp
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/

#include "Panier.h"

Panier::Panier() :
	totalAPayer_(0)
{
}

Panier::~Panier()
{
}

// methodes d'accès
vector<Produit*> Panier::obtenirContenuPanier() const
{
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const
{
	int nbreProduit = 0;
	for (int i = 0; i < contenuPanier_.size(); i++)
	{
		if(contenuPanier_[i] != nullptr)
		{
			nbreProduit ++;
		}
	}
	return nbreProduit;
}

double Panier::obtenirTotalApayer() const
{
	return totalAPayer_;
}

void Panier::modifierTotalAPayer(double totalAPayer)
{
	totalAPayer_ = totalAPayer;
}

// méthodes de modification

// autres méthodes
bool Panier::ajouterProduit(Produit* produit)  
{
	contenuPanier_.push_back(produit);
	totalAPayer_ += produit->obtenirPrix();
	return true;
}


Panier*& Panier::operator+=(Produit* produit)
{
	ajouterProduit(produit);
}


void Panier::livrer()
{
	contenuPanier_.clear();
	totalAPayer_ = 0;
}


Produit* Panier::trouverProduitPlusCher()
{
	Produit* produit = contenuPanier_[0];
	for(int i = 0; i < contenuPanier_.size() ; i++)
	{
		if(contenuPanier_[i]->obtenirPrix() > produit->obtenirPrix())
		{
			produit = contenuPanier_[i];
		}
	}
	return produit;
}

ostream& operator<<(ostream& out, const Panier& panier)
{
	out << "Le contenu du panier est: " ;

	for (int i = 0; i < panier.contenuPanier_.size(); i ++)
    {
    	out << *panier.contenuPanier_[i] << endl;
    }

 	out << "Le nombre de contenu et la capacite du panier sont : " << panier.obtenirNombreContenu() <<  "  -  " << panier.contenuPanier_.size() ;
 	out << "Le total a payer est de " << panier.obtenirTotalApayer() << endl;

    return out;
}
