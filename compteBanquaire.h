#ifndef COMPTEBANQUAIRE_H
#define COMPTEBANQUAIRE_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


class compteBanquaire
{
public :
    compteBanquaire(float _solde);
    void Deposer(float _montant);
    bool Retirer(float _motant);
    float ConsulterSolde();

private :
    float solde;
    float montant;
    float motant;

};

class ExceptionCompte
{
public:
    ExceptionCompte(int _code, std::string _message);
    int ObtenirCodeErreur() const;
    std::string ObtenirMessage() const;

private:
    int code;
    std::string message;
};

#endif // COMPTEBANQUAIRE_H
