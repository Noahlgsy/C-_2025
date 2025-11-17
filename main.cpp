#include "bank.h"
#include "client.h"
#include "comptecourant.h"
#include "compteepargne.h"
#include <iostream>

int main() {
    Banque banque("MaBanque");

    // Création des clients
    Client* c1 = new Client("Fronius", "Reiner", 1);
    Client* c2 = new Client("Molina", "Fred", 2);
    

    // Ajout des clients à la banque
    banque.ajouterClient(c1);
    banque.ajouterClient(c2);

    // Création des comptes
    Compte* cc1 = new CompteCourant(1001, c1);
    Compte* cc2 = new CompteCourant(1002, c2);

    // Ajout des comptes à la banque
    banque.ajouterCompte(cc1);
    banque.ajouterCompte(cc2);


    // Dépôt initial
    cc1->deposer(10000000000);       // sur le compte courant
    cc2->deposer(100);

    // Virement
    banque.virement(1001, 1002, 100000);

    std::cout << "Solde compte Reiner : " << cc1->getSolde() << std::endl;
    std::cout << "Solde compte Fred : " << cc2->getSolde() << std::endl;

    // Nettoyage
    delete c1;
    delete c2;
    delete cc1;
    delete cc2;
   

    return 0;
}