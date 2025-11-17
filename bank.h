#ifndef BANQUE_H
#define BANQUE_H

#include <map>
#include "Client.h"
#include "Compte.h"

class Banque {
private:
    std::string nom;
    std::map<int, Client*> clients; // Recherche rapide par clé (clients[id], comptes[numero])
    std::map<int, Compte*> comptes; //Clés uniques → impossible d’avoir deux clients avec le même ID ou deux comptes avec le même numéro
//la différence avec un std::vector est l'unicité des clés pour les retrouver                                       

public:
    Banque(std::string nom);

    void ajouterClient(Client* client);
    void ajouterCompte(Compte* compte);

    bool virement(int numSource, int numDest, double montant);
};

#endif