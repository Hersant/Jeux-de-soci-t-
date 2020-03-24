#include "Equipe.hpp"

using namespace std;

Equipe::Equipe() {}

Equipe::Equipe(string n, list<string> j, int nb) : Joueur(n, nb), joueurs(j) {}

Equipe::~Equipe() {}

list<string> Equipe::getJoueurs() const { return joueurs; }

void Equipe::setJoueurs(list<string> j) { joueurs = j; }
