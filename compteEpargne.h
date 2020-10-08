#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


class CompteEpargne
{
public :
    CompteEpargne(float _solde);
    void Deposer(float _montant);
    bool Retirer(float _motant);
    float ConsulterSolde();
    float ModifierTaux(float tauxInterets);
    float CalculerInterets(float interets);

private :
    float solde;
    float montant;
    float motant;
    float tauxInterets;
    float interets;

};

class ExceptionEpargne
{
public:
    ExceptionEpargne(int _code, std::string _message);
    int ObtenirCodeErreur() const;
    std::string ObtenirMessage() const;

private:
    int code;
    std::string message;
};

#endif // COMPTEEPARGNE_H
