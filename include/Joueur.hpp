#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur
{
protected:
    std::string nom;
    int nbPoints;
    
public:
    Joueur();
    Joueur(std::string nom, int nbPoints = 0); // Si le nb de points n'est pas fourni à la création, on considère 0.
    ~Joueur();

    std::string getNom() const;
    int getNbPoints() const;

    void setNom(std::string n);
    void setNbPoints(int nb);

};

#endif