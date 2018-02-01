/********************************************
* Titre: Travail pratique #1 -Rayon.h
* Date: 25 janvier 2018
* Auteurs: Philippe Turcotte - 1849836            Maxymilian Krokowski - 1899369
*******************************************/

#ifndef RAYON_H
#define RAYON_H

#include <string>
#include "Produit.h"
using namespace std;

class Rayon
{
public:
	// Constructeurs par defaut et par parametres
    Rayon();
	Rayon(string categorie);
   
	// Methodes d'acces
	string obtenirCategorie() const;
	Produit ** obtenirTousProduits() const;
    int obtenirCapaciteProduits() const;
    int obtenirNombreProduits() const;

	// Methodes de modification
	void modifierCategorie(string categorie);
    
    // autres methodes
    void ajouterProduit (Produit * produit);
    void afficher();
	

private:

	// Attributs prives
	string categorie_;
    Produit ** tousProduits_;
    int capaciteProduits_;
	int nombreProduits_;

};

#endif
