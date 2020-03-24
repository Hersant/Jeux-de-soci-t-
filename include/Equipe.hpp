#ifndef EQUIPE_HPP
#define EQUIPE_HPP

#include "Joueur.hpp"
#include <list>
#include <iostream>

class Equipe : public Joueur
{
private:
    std::list<std::string> joueurs; // Liste des joueurs de l'équipe

public:
    Equipe();
    Equipe(std::string nom, std::list<std::string> joueurs, int nbPoinst = 0);
    ~Equipe();

    std::list<std::string> getJoueurs() const;
    void setJoueurs(std::list<std::string> joueurs);
};

#endif