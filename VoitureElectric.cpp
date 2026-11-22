#include "VoitureElectric.h"

VoitureElectric::VoitureElectric(string m, int v, int f, int b) :Voiture(m, v, f)
{
    this->NiveauBatterie = b;
}

void VoitureElectric::afficher() const
{
    this->Voiture::afficher();
    cout << this->NiveauBatterie << endl;
}

VoitureElectric::~VoitureElectric()
{
    cout << "destructeur de la classe VoitureElectrique" << endl;
}