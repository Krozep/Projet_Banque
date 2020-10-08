#include "compteEpargne.h"

CompteEpargne::CompteEpargne(float _solde):
    solde(_solde),
    montant(0),
    motant(0),
    tauxInterets(0.005)
{

}

float CompteEpargne::ConsulterSolde(){
    cout << "Vous avez actuellement " << solde << "euros sur votre solde" << endl;

    return solde;
}

void CompteEpargne::Deposer(float montant){
    cout << "Combien souhaitez-vous mettre sur votre compte ? :" << endl;
    cin >> montant;
    cout << endl;
    solde = solde + montant;
    cout << "Somme ajoutée à votre compte." << endl;

}

bool CompteEpargne::Retirer(float motant){
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

float CompteEpargne::ModifierTaux(float tauxInterets){
    float nouveauTaux;
    cout << "Entrez les nouveaux taux d'intérêts : ";
    cin >> nouveauTaux;
    cout << endl;
    tauxInterets = nouveauTaux;
    cout << "Taux modifiés avec succès" << endl;

    return tauxInterets;
}

float CompteEpargne::CalculerInterets(float interets){
    interets = solde*tauxInterets;
    cout << "Vos intérêts sont de " << interets << endl;
    return interets;
}

ExceptionEpargne::ExceptionEpargne(int _code, std::string _message):
    code(_code),
    message(_message)
{}

int ExceptionEpargne::ObtenirCodeErreur() const
{
    return code;
}

std::string ExceptionEpargne::ObtenirMessage() const
{
    return message;
}
