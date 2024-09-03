#include <stdio.h>

int main() {

    float a, b;

    printf("Entrer la valeur de a: ");
    scanf("%f", &a);
    printf("Entrer la valeur de b: ");
    scanf("%f", &b);

    printf("La somme de a et b est: %.2f\n", a+b);
    printf("La substraction de a et b est: %.2f\n", a-b);
    printf("Le produit de a et b est: %.2f\n", a*b);
    printf("La division de a et b est: %.2f\n", a/b);


    return 0;
}

/*
Challenge 6 : Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.
*/