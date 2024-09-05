#include <stdio.h>

int Somme(int a, int b) {

    return a+b;
}

int main() {

    int a, b;

    printf("Entrer les valeurs de a et b: ");
    scanf("%d%d", &a, &b);

    printf("La somme de %d et %d = %d",a ,b, Somme(a,b));

    return 0;
}

/*
Challenge 1 : Fonction de Somme
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur somme. 
Créez un programme principal qui utilise cette fonction pour afficher la somme de deux nombres.
*/