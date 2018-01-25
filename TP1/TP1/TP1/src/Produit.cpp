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
	: name_("outil"), reference_(0), prix_(0)
{
}

