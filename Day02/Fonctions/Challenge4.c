#include <stdio.h>

int Minimum(int a, int b) {

    int Min;

    if (a<b)
    Min = a;
    else
    Min = b;

    return Min;
}

int main() {

    int a, b;

    printf("Entrer les valeurs de a et b: ");
    scanf("%d%d", &a, &b);

    printf("la valeur dentier a = %d,\t", a);
    printf("la valeur dentier b = %d,\t", b);
    printf("Lentier Min est %d", Minimum(a,b));

    return 0;
}



/*
Challenge 4 : Fonction de Minimum
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus petit des deux. 
Créez un programme principal qui utilise cette fonction pour afficher le minimum entre deux nombres.
*/