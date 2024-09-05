#include <stdio.h>

int main() {

    int i, n;

    printf("Entrer la valeur de n: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(n%i==0)
        printf("%d ", i);
    }

    return 0;
}

/*
Challenge 6 : Facteurs d'un Nombre
Écrivez un programme C qui affiche tous les facteurs d'un nombre entier positif n entré par l’utilisateur. 
Par exemple, pour n = 36, affichez : 1, 2, 3, 4, 6, 9, 12, 18, 36.
*/