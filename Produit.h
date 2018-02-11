/********************************************
* Titre: Travail pratique #2 - Produit.h
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/

#pragma once

#include <string>
#include <iostream>

using namespace std;

class Produit
{

public:
	Produit(const string& nom = "outil", int reference = 0, double prix = 0.0);

	string obtenirNom() const;
	int obtenirReference() const;
	double obtenirPrix() const;

	void modifierNom(const string& nom);
	void modifierReference(int reference);
	void modifierPrix(double prix);

	// TODO: Ajouter la surcharge de l'opérateur >
    bool operator>(const Produit &produit) const;
    
	// TODO: Ajouter la surcharge de l'opérateur <
    bool operator<(const Produit &produit) const;
    
	// TODO: Ajouter la surcharge de l'operateur ==
    bool operator==(const Produit &produit) const;
	
	// TODO: Ajouter la surcharge de l'opérateur >>
    friend std::istream& operator>>(std::istream& in, const Produit& produit);

    // TODO: Cette methode doit être remplacée par la surcharge de l'opérateur <<
    friend std::ostream& operator<<(std::ostream& out, const Produit& produit);
    
private:
	std::string nom_;
	int reference_;
    double prix_;
};
