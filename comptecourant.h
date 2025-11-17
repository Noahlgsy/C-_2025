#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H

#include "Compte.h"

class CompteCourant : public Compte { //hérite de la classe virtuelle Compte 
public:
    CompteCourant(int numero, Client* client)
        : Compte(numero, client) {}
};

#endif