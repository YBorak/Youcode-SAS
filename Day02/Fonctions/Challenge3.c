#include <stdio.h>

int Maximum(int a, int b) {

    int Max;

    if (a>b)
    Max = a;
    else
    Max = b;

    return Max;
}

int main() {

    int a, b;

    printf("Entrer les valeurs de a et b: ");
    scanf("%d%d", &a, &b);

    printf("la valeur dentier a = %d,\t", a);
    printf("la valeur dentier b = %d,\t", b);
    printf("Lentier Max est %d", Maximum(a,b));

    return 0;
}

/*
Challenge 3 : Fonction de Maximum
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus grand des deux. 
Créez un programme principal qui utilise cette fonction pour afficher le maximum entre deux nombres.
*/