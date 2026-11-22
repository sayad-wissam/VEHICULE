#pragma once
#include "Voiture.h"
class VoitureElectric :public Voiture
{
private:
    int NiveauBatterie;
public:
    VoitureElectric(string, int, int, int);
    void afficher()const override;
    ~VoitureElectric();
};