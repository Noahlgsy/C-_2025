#include "Client.h"
#include "Compte.h"

Client::Client(std::string nom, std::string prenom, int id)
    : nom(nom), prenom(prenom), id_client(id) {}

void Client::ajouterCompte(Compte* compte) {
    comptes.push_back(compte);
}

std::string Client::getNomComplet() const {
    return prenom + " " + nom;
}