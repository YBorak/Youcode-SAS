#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    float m;

    printf("Entrer la de a: ");
    scanf("%d", &a);
    printf("Entrer la de b: ");
    scanf("%d", &b);
    printf("Entrer la de c: ");
    scanf("%d", &c);

    m = sqrt(a*b*c)*1/3;

    printf("la moyenne geometrique de trois nombres saisis par lutilisateur est: %.2f", m);

    return 0;
}

/*
Challenge 8 : Calcul de la moyenne géométrique
Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur. Formule :

Moyenne géométrique = (a * b * c)^(1/3)
*/