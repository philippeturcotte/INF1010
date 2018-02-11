/********************************************
* Titre: Travail pratique #2 - Client.h
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/

#pragma once

#include <string>
#include "Panier.h"

using namespace std;

class Client
{

public:
	Client(const string&  nom, const string& prenom, int identifiant, const string& codePostal, long date);
	~Client();

	// TODO: Ajouter un constructeur par copie si necessaire

	virtual string obtenirNom() const;
	virtual string obtenirPrenom() const;
	virtual int obtenirIdentifiant() const;
	virtual string obtenirCodePostal() const;
	virtual long obtenirDateNaissance() const;
	Panier* obtenirPanier() const;

	void modifierNom(const string& nom);
	void modifierPrenom(const string& prenom);
	void modifierIdentifiant(int identifiant);
	void modifierCodePostal(const string& codePostal);
	void modifierDateNaissance(long date);

	// Adapter l'implementation de la methode acheter si besion
	void acheterPanier(Produit * produit);
	void livrerPanier();

	// TODO: Surcharger l'operateur d'affectation =
	Client& operator=(const Client& client);

	// TODO: Surcharger l'operateur == (client == identifiant)
	friend bool operator==(const Client& client, const int identifiant);

	// TODO: Surcharger l'operateur == (identifiant == client)
	friend bool operator==(const int identifiant, const Client& client);

	// TODO: Cette methode doit être remplacée par la surcharge de l'opérateur <<
	friend ostream& operator<<(ostream& out, const Client& client);

private:
	string nom_;
	string prenom_;
	int identifiant_;
	string codePostal_;
	long dateNaissance_;
	Panier *  monPanier_;

};
