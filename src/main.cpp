#include "Equipe.hpp"
#include "Joueur.hpp"
#include <iostream>
#include <list>
#include <ctime>

using namespace std;

int main() 
{
    time_t now = time(0);
    char * dt = ctime(&now);
    tm *ltm = localtime(&now);

    cout << "\n\n***\n" << endl;
    cout << "Date du jour : " << dt; 
    cout << "Heure locale : " << ltm->tm_hour << ":" << ltm->tm_min << endl;
    cout << "Tout est fin pret ! Creez vos equipes et amusez vous bien ! ;)" << endl;
    cout << "\n\n***\n" << endl;

    return 0;
}