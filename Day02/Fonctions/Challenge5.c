#include <stdio.h>

int factorielle(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorielle(n-1));
}

int main() {

    int nbr, f;

    printf("Entrer la valeur de n: ");
    scanf("%d", &nbr);
    
    if (nbr<0){
      printf("erreur, la factorielle est negatif");
    }
    else {
      f=factorielle(nbr);
      printf("La factorielle de %d est %d", nbr, f);
    }

    return 0;
}

/*
Challenge 5 : Fonction de Factorielle
Écrivez une fonction en C qui calcule la factorielle d'un entier positif. 
La fonction doit prendre un entier en paramètre et retourner sa factorielle. 
Créez un programme principal qui utilise cette fonction pour afficher la factorielle d'un nombre donné.
*/