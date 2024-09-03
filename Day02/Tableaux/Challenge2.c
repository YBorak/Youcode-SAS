#include <stdio.h>

int main() {

    int T[10];
    int i, taille;

    printf("Entrer la taille: ");
        scanf("%d", &taille);

    for(i=0;i<taille;i++){
        printf("Entrer l element de tableau T[%d]: ", i+1);
        scanf("%d", &T[i]);
    }

    for(i=0;i<taille;i++){
        printf("Affichage de T[%d] = %d\n",i+1 ,T[i]);
    }

    return 0;
}

/*
Challenge 2 : Saisie et Affichage des Éléments
Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau, puis demande à l'utilisateur de saisir ces éléments. Affichez ensuite les éléments du tableau.
*/
