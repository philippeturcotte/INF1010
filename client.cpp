/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 25 janvier 2018
* Auteurs: Philippe Turcotte - 1849836      Maxymilian Krokowski - 1899369
*******************************************/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "client.h"

// Initiation du constructeur par valeur
Client::Client(string  nom,  string prenom, int identifiant, string codePostal,  long dateNaissance)
	: nom_(nom), prenom_(prenom), identifiant_(identifiant), codePostal_(codePostal), dateNaissance_(dateNaissance), monPanier_(nullptr)
{
}

// Methode d'acces aux attributs
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

// Methode de modification des attributs
void Client::modifierNom(string nom)
{
	nom_ = nom ; 
}

void Client::modifierPrenom(string prenom)
{
	prenom_ = prenom;
}

void Client::modifierIdentifiant(int identifiant)
{
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(string codePostal)
{
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long dateNaissance)
{
	dateNaissance_ = dateNaissance;
}

// Methode pour ajouter un produit dans le panier du client
void Client::acheter (Produit* produit)
{
	monPanier_->ajouterProduit(produit);
}


//Methode afin d'afficher le contenu du Panier
void Client::afficherPanier()
{
	if (monPanier_->obtenirNombreContenu() == 0)
	{
		cout << "Le contenu du Panier est presentement vide." << endl;
	}
	else
	{
		monPanier_->afficher();
	}
}

//Methode permettant de livrer le contenu du panier
void Client::livrerPanier()
{
	monPanier_->livrer();
}
