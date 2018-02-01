/********************************************
 * Titre: Travail pratique #1 - Produit.h
 * Date: 25 janvier 2018
 * Auteurs: Philippe Turcotte - 1849836            Maxymilian Krokowski - 1899369
 *******************************************/

#include <string>
#include "Produit.h"

using namespace std;

#ifndef PANIER_H
#define PANIER_H
class Panier
{
public:
    Panier (int capacite);
    
	// methodes d'accès
    Produit **  obtenirContenuPanier() const;
    int obtenirNombreContenu() const;
    double obtenirTotalAPayer() const;
    
    // méthodes de modification

    // autres méthodes
    void ajouterProduit(Produit* produit);
    void livrer();
    void afficher();	

private:
    
    Produit ** contenuPanier_;
    int  nombreContenu_;
    int capaciteContenu_;
    double totalAPayer_;
};

#endif

