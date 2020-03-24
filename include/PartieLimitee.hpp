#ifndef PARTIELIMITEE_HPP
#define PARTIELIMITEE_HPP

#include "Partie.hpp"

class PartieLimitee : public Partie
{
private:
    int maxPoints; // Nb de points à atteindre pour gagner la partie
public:
    PartieLimitee();
    PartieLimitee(int maxPoints);
    ~PartieLimitee();
    int getMaxPoints() const;
    void setMaxPoints(int maxPoints);
};

#endif