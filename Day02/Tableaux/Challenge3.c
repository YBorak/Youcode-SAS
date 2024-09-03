#include <stdio.h>

int main() {

    int T[10];
    int i, taille, S;

    printf("Entrer la taille: ");
        scanf("%d", &taille);

    for(i=0;i<taille;i++){
        printf("Entrer l element de tableau T[%d]: ", i+1);
        scanf("%d", &T[i]);
    }
    S = 0;
    for(i=0;i<taille;i++){
        S = S+T[i];
    }
    printf("la somme des elements de tableau est: %d\n", S);

    return 0;
}

/*
Challenge 3 : Somme des Éléments
Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers. 
Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.
*/