
//  panier.cpp
//  Created by Martine Bellaiche on 18-01-22.
//  Copyright © 2018 Martine Bellaiche. All rights reserved.
//

#include <string>
#include "Produit.h"

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

