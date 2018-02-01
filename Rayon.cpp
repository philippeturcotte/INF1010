/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 25 janvier 2018
* Auteurs: Philippe Turcotte - 1849836            Maxymilian Krokowski - 1899369
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
    // si il y a rien dans tousProduits
	if (tousProduits_ == nullptr)
	{
		Produit** tableauProduit = new Produit*[5];
		tableauProduit[0] = produit;
        
        for (int i = 0; i < nombreProduits_; i++)
            
        {
            tableauProduit[i] = tousProduits_[i];
        }
        
        delete [] tousProduits_ ;
        
		tousProduits_ = tableauProduit;
        
        capaciteProduits_ = 5;
        
        nombreProduits_ = 1;
        
	}
    
    // si tousProduits est plein
	else if (capaciteProduits_ == nombreProduits_)
	{
		Produit** tableauProduit = new Produit*[capaciteProduits_ + 5];
            for (int i = 0; i < nombreProduits_; i++)  
            {
                tableauProduit[i] = tousProduits_[i];
            }
        tableauProduit[nombreProduits_] = produit;
        for (int j=0; j<nombreProduits_; j++)
        {
            delete tousProduits_[j];
        }
       delete [] tousProduits_ ;
       tousProduits_ = tableauProduit;
	   capaciteProduits_ = capaciteProduits_ + 5;
	   nombreProduits_++;
	}
    // si il reste de lespace a tousProduits
	else
    {
        tousProduits_[nombreProduits_] = produit;

	nombreProduits_++;
    }

}

// Afficher les attributs du constructeur
void afficherProduit(Rayon rayon)
{
	cout << rayon.obtenirCategorie() << rayon.obtenirTousProduits() << rayon.obtenirCapaciteProduits() << rayon.obtenirNombreProduits();
}
