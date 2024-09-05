#include <stdio.h>

int main() {

    int i, n, rn;

    printf("Entrer le numero n: ");
    scanf("%d", &n);

    rn = 0;
    while(n!=0){
        rn = rn*10+n%10;
        n/=10;
    }
    printf("le numero entier afficher en ordre inverse est: %d", rn);

    return 0;
}

/*
Challenge 4 : Inversion d'un Entier
Écrivez un programme C qui lit un entier à plusieurs chiffres et l'affiche en ordre inverse sans utiliser de tableaux. 
Par exemple, si l'entrée est 12345, affichez 54321.
*/