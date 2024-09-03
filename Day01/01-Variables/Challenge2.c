#include <stdio.h>


int main() {

    int K, C;

    printf("Entrer la temperature en c: ");
    scanf("%d", &C);

    K = C + 273.15;

    printf("la temperature en Kelvin est: %d", K);

    return 0;
}

/*
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

K = C + 273.15
*/