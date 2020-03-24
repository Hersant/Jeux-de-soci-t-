#include "Joueur.hpp"

using namespace std;

Joueur::Joueur() {}

Joueur::~Joueur(){} 

Joueur::Joueur(string n, int nb) : nom(n), nbPoints(nb) {}

string Joueur::getNom() const { return nom; }
int Joueur::getNbPoints() const { return nbPoints; }

void Joueur::setNom(string n) { nom = n; }
void Joueur::setNbPoints(int nb) { nbPoints = nb; }