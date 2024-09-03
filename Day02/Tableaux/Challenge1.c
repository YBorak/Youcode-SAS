#include <stdio.h>

int main() {

    int T[5];
    int i;

    for(i=0;i<5;i++){
        printf("Entrer l element de tableau T[%d]: ", i+1);
        scanf("%d", &T[i]);
    }

    for(i=0;i<5;i++){
        printf("Affichage de T[%d] = %d\n",i+1 ,T[i]);
    }

    
    return 0;
}

/*
Challenge 1 : Initialisation et Affichage
Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données et affiche ces valeurs. 
Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.
*/

