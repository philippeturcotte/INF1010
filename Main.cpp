/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 25 janvier 2018
* Auteur: Philippe Turcotte - 1849836
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit
	Produit p1("Banane", 1, 2.0);
	Produit p2("Kiwi", 2, 2.0);
	Produit p3("Pomme", 3, 2.0);
	Produit p4("Poire", 4, 2.0);
	Produit p5("Carotte", 5, 2.0);
	Produit p6("Durian", 6, 400.0);

	//2-  Modifiez le nom, la référence, le prix du troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
	p3.modifierNom("Pomme Vert").modifierReference(45).modifierPrix(2.5);
	p3.afficher();

	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon r1();

	//4-  Modifiez la catégorie  du rayon
   r1.modifierCategorie("FruitLegume")

    // 5- Ajouter 6 produits de votre choix dans le rayon créé
    r1.ajouterProduit(p1).ajouterProduit(p2).ajouterProduit(p3).ajouterProduit(p4).ajouterProduit(p5).ajouterProduit(p6)

    // 6- afficher le contenu du rayon
    r1.afficher();
  
	//7-  Creez un objet de classe client à l'aide du constructeur
    Client c1("Fruite", "Plante", 1, "H3S 1X3", 01012000)

	//8-  afficher l'etat des attributs du client
	cout << c1.obtenirNom() << endl << c1.obtenirPrenom() << endl << c1.obtenirIdentifiant() << endl << c1.obtenirCodePostal() << endl << c1.obtenirDateNaissance();

	//9-   Le client achete 9 produits
   

	//10- Afficher le contenu du panier du client

     //11- livrer le panier du client
   
    
	//12- afficher le contenu du panier du client
    
	//13-  terminer le programme correctement
    
    return 0;
}
