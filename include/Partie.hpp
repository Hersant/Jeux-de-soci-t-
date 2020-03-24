#ifndef PARTIE_HPP
#define PARTIE_HPP

class Partie
{
public:
    virtual void initialisation() = 0; // Initialisation de la partie
    virtual bool estFinie() = 0; // Renvoie vrai si la partie est finie, faux sinon
};

#endif