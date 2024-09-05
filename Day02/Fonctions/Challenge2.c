#include <stdio.h>

int Produit(int a, int b) {

    return a*b;
}

int main() {

    int a, b;

    printf("Entrer les valeurs de a et b: ");
    scanf("%d%d", &a, &b);

    printf("Le produit de %d et %d = %d",a ,b, Produit(a,b));

    return 0;
}

/*
Challenge 2 : Fonction de Multiplication
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit. 
Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.
*/