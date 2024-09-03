#include <stdio.h>

int main() {

    int T[10];
    int i, taille, Min;

    printf("Entrer la taille: ");
        scanf("%d", &taille);

    for(i=0;i<taille;i++){
        printf("Entrer l element de tableau T[%d]: ", i+1);
        scanf("%d", &T[i]);
    }

    for(i=0;i<taille;i++){
        if(T[i]<Min)
        Min = T[i];
    }
    printf("la somme des elements de tableau est: %d\n", Min);

    return 0;
}

/*
Challenge 5 : Trouver le Minimum
Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers. 
Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/