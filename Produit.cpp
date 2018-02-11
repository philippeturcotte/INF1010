/********************************************
* Titre: Travail pratique #2 - Produit.cpp
* Date: 12 Fevrier 2018
* Auteur: Philippe TURCOTTE 1849846
*		  Maxymilian KROKOWSKI 1899369
*******************************************/

#include "Produit.h"

Produit::Produit(const string& nom, int reference, double prix) :
	nom_(nom), reference_(reference), prix_(prix)
{ 
}

// Methodes d'acces
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


// Methodes de modification
void Produit::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
	prix_ = prix;
}

// surcharge des opérateurs


//surcharge de l'opérateur >

bool Produit::operator>(const Produit & produit) const
{
    return (prix_ > produit.obtenirPrix());
}

// surcharge de l'opérateur <

bool Produit::operator<(const Produit & produit) const
{
    return (prix_ < produit.obtenirPrix());
}


//surcharge de l'opérateur ==

bool Produit::operator==(const Produit &produit) const
{
    return (nom_ == produit.obtenirNom() &&
            reference_ == produit.obtenirReference() &&
            prix_ == produit.obtenirPrix());
}
// surcharge de l'opérateur >>

std::istream& operator>>(std::istream& in, const Produit& produit)
{
    in >> produit.nom_ >> endl;
    in >> produit.reference_  >> endl;
    in >> produit.prix_ >> endl;

    return in;
}


// surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& out, const Produit& produit)
{
    out << "Le nom du produit est: " << produit.nom_<< endl <<
 	"Le numero de reference du produit est: " << produit.reference_ << endl <<
    "Le Prix du produit est: "<< produit.prix_ << endl;

    return out;
}
