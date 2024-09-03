#include <stdio.h>

int main() {

    int T[10];
    int i, taille, f, res;

    printf("Entrer la taille: ");
        scanf("%d", &taille);

    printf("Entrer le facteur: ");
        scanf("%d", &f);

    for(i=0;i<taille;i++){
        printf("Entrer l element de tableau T[%d]: ", i+1);
        scanf("%d", &T[i]);
    }

    for(i=0;i<taille;i++){
        res = T[i]*f;
        printf("la somme des elements de tableau T[%d] est: %d\n",i+1, res);
    }

    return 0;
}

/*
Challenge 6 : Multiplication des Éléments
Écrivez un programme C qui multiplie chaque élément d'un tableau d'entiers par un facteur donné et affiche le tableau résultant. 
Le programme doit demander le nombre d'éléments, les éléments du tableau, et le facteur de multiplication.
*/