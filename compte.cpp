#include "Compte.h"
#include <stdexcept>

Compte::Compte(int numero, Client* client)
    : numero_compte(numero), client(client), solde(0.0) {} //solde du compte initialisé à 0 

void Compte::deposer(double montant) {
    solde += montant;
    historique.push_back("Dépôt de " + std::to_string(montant)); //mettre dans l'historique du tbaleau le montant du dépôt 
}

bool Compte::retirer(double montant) {
    if (montant > solde)
        return false;

    solde -= montant;
    historique.push_back("Retrait de " + std::to_string(montant)); //mettre dans l'historique du tbaleau le montant du retrait 
    return true;
}