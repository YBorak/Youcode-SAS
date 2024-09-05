#include <stdio.h>

int main() {

    int i, j, L;

    printf("Entrer la valeur de L(ligne): ");
    scanf("%d", &L);

    for(i=1;i<=L;i++){

        for(j=L-i;j>=1;j--){
            printf(" ");
        }

        for(j=1;j<=i+i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
Challenge 2 : pyramide d'étoile
      *
     ***
    *****
   *******
  *********
 ***********
*************
Écrire le programme pour avoir un pyramide d'étoile, 
le nombre des lignes à composer est demandé à l’utilisateur.(chaque ligne doit avoir un nombre premier d'étoiles.
*/