/********************************************
* Titre: Travail pratique #2 - Client.cpp
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/
#include "Client.h"


Client::Client(const string&  nom, const string& prenom, int identifiant, const string& codePostal, long date) :
	nom_(nom), prenom_(prenom), identifiant_(identifiant), codePostal_(codePostal),	dateNaissance_(date)
{
}

Client::~Client()
{
}

// Methodes d'acces
string Client::obtenirNom() const
{
	return nom_;
}

string Client::obtenirPrenom() const
{
	return prenom_;
}

int Client::obtenirIdentifiant() const
{
	return identifiant_;
}

string Client::obtenirCodePostal() const
{
	return codePostal_;
}

long Client::obtenirDateNaissance() const
{
	return dateNaissance_;
}

Panier * Client::obtenirPanier() const
{
	return monPanier_;
}

// Methodes de modification
void  Client::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Client::modifierPrenom(const string& prenom)
{
	prenom_ = prenom;
}

void Client::modifierIdentifiant(int identifiant)
{
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(const string& codePostal)
{
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long date)
{
	dateNaissance_ = date;
}

// Autres méthodes
/*
void Client::acheterPanier(Produit* produit)
{
	*monPanier_ += &produit;
}
*/

void Client::livrerPanier()
{
	monPanier_->livrer();
}

Client& Client::operator=(const Client& client)
{
	nom_  = client.obtenirNom();
	prenom_ = client.obtenirPrenom();
	identifiant_ = client.obtenirIdentifiant();
	codePostal_ = client.obtenirCodePostal();
	dateNaissance_ = client.obtenirDateNaissance();
	monPanier_ = client.obtenirPanier();
}

bool operator==(const Client& client, const int identifiant)
{
	return (client.identifiant_ - identifiant == 0);
}


bool operator==(const int identifiant, const Client& client)
{
	return (client.identifiant_ - identifiant == 0);
}


ostream& operator<<(ostream& out, const Client& client)
{
	out << "Le nom du client est " << client.prenom_ << " " << client.nom_ << endl <<
 	"L'identifiant est : " << client.identifiant_ << endl <<
    "Le code postale est : " << client.codePostal_ << endl <<
    "Sa date de naissance : " << client.dateNaissance_ << endl <<
    "Son panier est : " << client.monPanier_ << endl;

    return out;
}
