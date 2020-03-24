#ifndef JEUCOOPERATIF_HPP
#define JEUCOOPERATIF_HPP

#include "PartieLimitee.hpp"
#include "Equipe.hpp"

class JeuCooperatif : public PartieLimitee
{
protected:
    std::string nom; // Nom du jeu
    Equipe equipe; // L'équipe qui joue
    bool fin; // fin est à true si la partie est finie, false sinon
public:
    JeuCooperatif();
    ~JeuCooperatif();
    void initialisation();
    bool estFinie();

    int getNbEquipes() const;
    void setNbEquipes(int nb);
    std::string getNom() const;
    void setNom(std::string);
};

#endif