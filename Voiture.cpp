#include "Voiture.h"

Voiture::Voiture(string m, int v, int f) :Vehicule(m, v)
{
    this->qteFual = f;
}

void Voiture::afficher() const
{
    this->Vehicule::afficher();
    cout << this->qteFual << endl;
}

Voiture::~Voiture()
{
    cout << "destructeur de la classe Voiture" << endl;
}