#ifndef PARTIEAUTOURPARTOUR_HPP
#define PARTIEAUTOURPARTOUR_HPP

#include "JeuNonCooperatif.hpp"

class PartieAuTourParTour : public JeuNonCooperatif
{
private:
    int tourCourant; // Numéro du tour courant
    Joueur joueurCourant; // Le joueur dont le tour de jouer est arrivé
public:
    PartieAuTourParTour();
    ~PartieAuTourParTour();
    int getTourCourant() const;
    void setTourCourant(int n);
    Joueur getJoueurCourant() const;
    void setJoueurCourant(Joueur joueur);
};


#endif