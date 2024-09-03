#include <stdio.h>

int main() {

    int C;

    printf("Entrer la temperature en c: ");
    scanf("%d", &C);

    if(C<0)
        printf("Solide");
    else if(C==0 || C<100)
        printf("Liquide");
    else
        printf("Gaz");

    return 0;
}

/*
Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz
*/