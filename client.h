#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <vector>

class Compte; // déclaration anticipée

class Client {
private:
    std::string nom;
    std::string prenom;
    int id_client;
    std::vector<Compte*> comptes;

public:
    Client(std::string nom, std::string prenom, int id);

    void ajouterCompte(Compte* compte);
    std::string getNomComplet() const;

    int getId() const { return id_client; }
};

#endif