#include <stdio.h>

int main() {

    int i, N, S;

    printf("Entrer la valeur de N: " );
    scanf("%d", &N);

    S=0;
    for(i=1;i<=N;i++){
        S=S+i;
    }
    printf("La somme est: %d", S);

    return 0;
}


/*
Challenge 5 : Somme des N Nombres
Écrivez un programme C qui demande à l’utilisateur un nombre entier n et calcule la somme des n premiers nombres naturels. 
Par exemple, si n est 5, la somme est 1 + 2 + 3 + 4 + 5 = 15.
*/