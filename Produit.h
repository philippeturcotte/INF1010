/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 25 janvier 2018
* Auteur: Philippe Turcotte - 1849836
*******************************************/

#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
#include <iostream>
using namespace std;

class Produit
{
public:
	// Constructeurs par defaut et par parametres
	Produit();
	Produit(string nom, int reference, double prix);

	// Methodes d'acces
	string obtenirNom() const;
	int obtenirReference() const;
	double obtenirPrix() const;

	// Methodes de modification
	void modifierNom(string nom);
	void modifierReference(int reference);
	void modifierPrix(double prix);
   
    // autres methodes
    void afficher();
   
private:

	// attributs prives
	string nom_;
	int reference_;
    double prix_;
};

#endif
