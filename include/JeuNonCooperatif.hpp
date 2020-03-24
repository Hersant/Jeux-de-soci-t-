#ifndef JEUNONCOOPERATIF_HPP
#define JEUNONCOOPERATIF_HPP

#include "Joueur.hpp"
#include "JeuCooperatif.hpp"

#include <list>

class JeuNonCooperatif : public JeuCooperatif
{
protected:
    std::list<Joueur> joueurs; // Liste des joueurs en compétition
public:
    JeuNonCooperatif();
    ~JeuNonCooperatif();
    void initialisation();
};

#endif