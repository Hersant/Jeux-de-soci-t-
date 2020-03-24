#include "PartieAuTourParTour.hpp"

PartieAuTourParTour::PartieAuTourParTour() {}

PartieAuTourParTour::~PartieAuTourParTour() {}

int PartieAuTourParTour::getTourCourant() const {
    return tourCourant;
}

void PartieAuTourParTour::setTourCourant(int n) {
    tourCourant = n;
}

Joueur PartieAuTourParTour::getJoueurCourant() const {
    return joueurCourant;
}

void PartieAuTourParTour::setJoueurCourant(Joueur j) {
    joueurCourant = j;
}