#include <stdio.h>

int main() {

    int i, n, nbrp;
    nbrp = 0;

    printf("Entrer la valeur de n: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if (n%i == 0)
            nbrp++; 
    }
    
    if(nbrp==2){
        printf("le numero %d est un nobre premier", n);
    } else {
        printf("le numero %d n est pas un nobre premier", n);
    }

    return 0;
}

/*
Challenge 3 : Affichage des Nombres Premiers
Écrivez un programme C qui lit un entier n et affiche tous les nombres premiers de 1 à n. 
Un nombre est considéré premier s'il est divisible uniquement par 1 et lui-même.
*/