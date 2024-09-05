#include <stdio.h>

int Fibonacci(int n)
{
    if (n==0 || n==1)
        return n;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    
    int nbr, fib;

    printf("Entrer la valeur de n: ");
    scanf("%d", &nbr);

    if (nbr<=1){
      printf("erreur, la factorielle est negatif");
    }
    else {
      fib=Fibonacci(nbr);
      printf("Fibonacci de %d est %d", nbr, fib);
}

    return 0;
}

/*
Challenge 6 : Fonction de Fibonacci
Écrivez une fonction en C qui calcule le n-ième terme de la suite de Fibonacci. 
La fonction doit prendre un entier en paramètre et retourner le n-ième terme. 
Créez un programme principal qui utilise cette fonction pour afficher le terme de Fibonacci demandé.
*/