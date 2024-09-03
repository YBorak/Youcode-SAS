#include <stdio.h>

int main() {

    int T[10];
    int i, taille, Max;

    printf("Entrer la taille: ");
        scanf("%d", &taille);

    for(i=0;i<taille;i++){
        printf("Entrer l element de tableau T[%d]: ", i+1);
        scanf("%d", &T[i]);
    }
    Max = 0;
    for(i=0;i<taille;i++){
        if(T[i]>Max)
        Max = T[i];
    }
    printf("la somme des elements de tableau est: %d\n", Max);

    return 0;
}

/*
Challenge 4 : Trouver le Maximum
Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers. 
Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/