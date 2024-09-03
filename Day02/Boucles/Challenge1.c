#include <stdio.h>

int main() {

    int i, n, res;

    printf("Entrer la valeur de n: ");
    scanf("%d", &n);

    for(i=10; i>=1; i--){
        res= n*i;
        printf("%d * %d = %d\n", n, i, res);
    }

    return 0;
}

/*
Challenge 1 : Table de Multiplication Inversée
Écrivez un programme C qui demande un nombre à l’utilisateur et affiche sa table de multiplication en ordre décroissant, de 10 à 1. 
Par exemple, pour le nombre 5, affichez :

5 * 10 = 50 
5 * 9 = 45 
5 * 8 = 40 
... 
5 * 1 = 5
*/