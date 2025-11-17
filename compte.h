#ifndef COMPTE_H
#define COMPTE_H

#include <string>
#include <vector>

class Client;

class Compte {
protected:
    int numero_compte;
    Client* client;
    double solde;
    std::vector<std::string> historique;

public:
    Compte(int numero, Client* client);

    virtual void deposer(double montant); //ici ca peut changer d'ou le "virutal" exemple ; frais de depot et bonus selon type de compte différent 

    virtual bool retirer(double montant); // pareil et le bool signifie retirer oui ou non 

    double getSolde() const { return solde; } //ne change pas selon le type de compte exemple: dans comptecourant et compteepargne ca ne change pas 
    int getNumero() const { return numero_compte; } // Elles ne font que renvoyer un attribut elles ne contiennent aucune règle métier à modifier.

    virtual ~Compte() {}
};

#endif