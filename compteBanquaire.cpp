#include "compteBanquaire.h"

compteBanquaire::compteBanquaire(float _solde):
    solde(_solde),
    montant(0),
    motant(0)
{
    // this->solde = _solde;
    // this->montant = 0;
    // this->motant = 0;


}

float compteBanquaire::ConsulterSolde(){
    cout << "Vous avez actuellement " << solde << "euros sur votre solde" << endl;
    return solde;
}

void compteBanquaire::Deposer(float montant){
    cout << "Combien souhaitez-vous mettre sur votre compte ? :" << endl;
    cin >> montant;
    cout << endl;
    solde = solde + montant;
    cout << "Somme ajoutée à votre compte." << endl;

}

bool compteBanquaire::Retirer(float motant){
    cout << "Combien souhaitez-vous retirer ? :" << endl;
    cin >> motant;
    cout << endl;
    if (motant > solde){
        cout << "Désolé, votre solde est dépassé, opération annulée" << endl;
    }
    else{
        solde = solde - motant;
        cout << "Somme retirée avec succès." << endl;
    }
    return solde;

}

ExceptionCompte::ExceptionCompte(int _code, std::string _message):
    code(_code),
    message(_message)
{}

int ExceptionCompte::ObtenirCodeErreur() const
{
    return code;
}

std::string ExceptionCompte::ObtenirMessage() const
{
    return message;
}
