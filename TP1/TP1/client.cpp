/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 25 janvier 2018
* Auteur: Philippe Turcotte - 1849836
*******************************************/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "client.h"

// Initiation du constructeur par valeur
Client::Client (string  nom,  string prenom, int identifiant, string codePostal,  long date);
	: nom_(nom), prenom_(prenom), identifiant_(identifiant), codePostal_(codePostal), date_(date), monPanier_(nullptr)
{
	monPanier_ = new Produit* (nullptr)
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
	return date_;
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

void Client::modifierDateNaissance(long date)
{
	date_ = date;
}

// Methode pour ajouter un produit dans le panier du client
void Client::acheter (Produit* produit)
{
	if (monPanier == nullptr)
	{
		Panier* tableauPanier = new Produit*[4];
		tableauPanier[0] = produit; 
		delete[] monPanier_;
		monPanier_ = tableauPanier;
	}

	else
	{
		monPanier_[panier->nombreContenu_] = produit;
	}

	panier->nombreContenu_++;
	panier->totalAPayer_ = totalAPayer_ + produit->obtenirPrix;	
}

//Methode afin d'afficher le contenu du Panier
void Client::afficherPanier()
{
	if (produit->obtenirNombreContenu() == 0)
	{
		cout << "Le contenu du Panier est presentement vide." << endl;
	}
	else
	{
		for (int i = 0; i < produit->obtenirNombreContenu(), i ++)
		{
			cout << afficherProduit(produit->obtenirNombreContenu(i)) << endl;
		}
	}
}

//Methode permettant de livrer le contenu du panier
void Client::livrerPanier()
{
	delete[] monPanier_;
	// Panier* tableauPanier = new Produit*[nullptr];
	// monPanier_= tableauPanier;
}