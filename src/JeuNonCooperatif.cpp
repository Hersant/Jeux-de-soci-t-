#include "JeuNonCooperatif.hpp"

#include <iostream>
#include <list>

using namespace std;

JeuNonCooperatif::JeuNonCooperatif() {}

JeuNonCooperatif::~JeuNonCooperatif() {}

void JeuNonCooperatif::initialisation() {
    for (list<Joueur>::iterator it = joueurs.begin(); it != joueurs.end(); ++it)
    {
        it->setNbPoints(0);
    }
    
}