/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 25 janvier 2018
* Auteur: Philippe Turcotte - 1849836
*******************************************/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "Produit.h"

// Initiation du constructeur par default
Produit :: Produit()
	: nom_("outil"), reference_(0), prix_(0)
{
}

// Initiation du constructeur pour l'attribut categorie
Produit::Produit(string nom, int reference, double prix)
	: nom_(nom), reference_(reference), prix_(prix)
{
}

// Methode d'acces aux attributs
string Produit::obtenirNom() const
{
	return nom_;
}

int Produit::obtenirReference() const
{
	return reference_;
}

double Produit::obtenirPrix() const
{
	return prix_;
}

// Methode de modification des attributs
void Produit::modifierNom(string nom)
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_= reference;
}

void Produit::modifierPrix(double prix)
{
	prix_= prix;
}

// Affiche l'etats des attributs
void Produit::afficher() 
{
	cout << "Description du produit choisi: " << obtenirNom() << obtenirReference() << obtenirPrix() << endl;
}
