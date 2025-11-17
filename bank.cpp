#include "bank.h"

Banque::Banque(std::string nom) : nom(nom) {}

void Banque::ajouterClient(Client* client) {
    clients[client->getId()] = client;
}

void Banque::ajouterCompte(Compte* compte) {
    comptes[compte->getNumero()] = compte;
}

bool Banque::virement(int numSource, int numDest, double montant) {
    if (!comptes.count(numSource) || !comptes.count(numDest)) //si le compte source ou le compte destination n'existe pas on annule le virement 
        return false;

    if (!comptes[numSource]->retirer(montant)) 
        return false;

    comptes[numDest]->deposer(montant);
    return true;
}