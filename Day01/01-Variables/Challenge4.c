#include <stdio.h>

int main() {

    float kmh, ms;

    printf("la distance en kilometres par heure (km/h): ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("la vitesse en metres par seconde (m/s) est: %.2f", ms);

    return 0;
}

/*
Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :

m/s = km/h * 0.27778
*/