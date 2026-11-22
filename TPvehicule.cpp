#include "VoitureElectric.h"

int main()
{
    Vehicule* V1 = new Voiture("1234", 100, 650);
    Voiture* V2 = new VoitureElectric("5678", 200, 500, 70);
    //V1->afficher();
    V2->afficher();
    //delete V1;
    delete V2;
}