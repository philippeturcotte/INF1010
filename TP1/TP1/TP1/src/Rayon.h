/********************************************
* Titre: Travail pratique #1 -Rayon.h
* Date: 25 janvier 2018
* Auteur: Philippe Turcotte - 1849836
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
	Rayon(string cat);
   
	// Methodes d'acces
	string obtenirCategorie();
	Produit ** obtenirTousProduits();
    int obtenirCapaciteProduits();
    int obtenirNombreProduits();
	

	// Methodes de modification
	void modifierCategorie(string cat);
    
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
