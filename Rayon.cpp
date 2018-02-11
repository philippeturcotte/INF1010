/********************************************
* Titre: Travail pratique #2 - Rayon.cpp
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/
#include "Rayon.h"

Rayon::Rayon(const string& cat) :
	categorie_(cat)
{
}

Rayon::~Rayon()
{
}

// Methodes d'acces
string Rayon::obtenirCategorie() const
{
	return categorie_;
}

vector<Produit*> Rayon::obtenirTousProduits() const
{
	return tousProduits_;
}

int Rayon::obtenirCapaciteProduits() const
{
	return tousProduits_.size();
}

int Rayon::obtenirNombreProduits() const
{
	int nbreProduit = 0;
	for (int i = 0; i < tousProduits_.size(); i++)
	{
		if(tousProduits_[i] != nullptr)
		{
			nbreProduit ++;
		}
	}
	return nbreProduit;
}

// Methodes de modification
void Rayon::modifierCategorie(const string& cat)
{
	categorie_ = cat;
}

// Ajouter un produit au rayon

void Rayon::ajouterProduit(Produit* produit)  
{
	tousProduits_.push_back(produit);
}

Rayon& Rayon::operator+=(Produit* produit)
{
	ajouterProduit(produit);
	return *this;
}

// la methode doublons
int Rayon::compterDoublons(const Produit*& produit)
{
	int doublons = 0;
	for(int i = 0; i < tousProduits_.size(); i++)
	{
		if (tousProduits_[i] == produit)
		{
			doublons ++;
		}
	}			
	return doublons;
}

// surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& out, const Rayon& rayon)
{
    out << "Les produits du rayon sont: " ;

    for (int i = 0; i < rayon.tousProduits_.size(); i ++)
    {
    	out << rayon.tousProduits_[i] << endl;
    }

    out << "La capacite de ce rayon est de " << rayon.tousProduits_.size() << " nombre de produits." ;
    out << "Le nombre de produit actuel est de "<< rayon.obtenirNombreProduits() << endl;
    
    return out;
}
