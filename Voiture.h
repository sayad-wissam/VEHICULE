#pragma once
#include "Vehicule.h"
class Voiture :public Vehicule
{
private:
    int qteFual;
public:
    Voiture(string m, int v, int f);
    void afficher()const override;
    ~Voiture();
};