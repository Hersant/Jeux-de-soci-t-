#include "JeuCooperatif.hpp"

#include <iostream>

using namespace std;

JeuCooperatif::JeuCooperatif() {}

JeuCooperatif::~JeuCooperatif() {}

void JeuCooperatif::initialisation()
{
    equipe.setNbPoints(0);
}

bool JeuCooperatif::estFinie()
{
    fin = true; // Pour mettre fin à la partie
    return fin;
}


string JeuCooperatif::getNom() const {
    return nom;
}
void JeuCooperatif::setNom(string n) {
    nom = n;
}