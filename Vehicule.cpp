#include "Vehicule.h"

Vehicule::Vehicule(string m, int v)
{
    this->marque = m;
    this->vitesse = v;
}

void Vehicule::afficher() const
{
    cout << this->marque << endl;
    cout << this->vitesse << endl;
}

Vehicule::~Vehicule()
{
    cout << "destructeur de la classe Vehicule" << endl;
}