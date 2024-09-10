#include <stdio.h>

typedef struct{
    int largeur;
    int longeur;
} Rectangele;

Rectangele aire;

void calculRectangle(Rectangele aire){
    printf("%d", aire.largeur*aire.longeur);
}


int main() {

    printf("Entrer la Longeur de rectange: ");
    scanf("%d", &aire.largeur);
    printf("Entrer la largeur de rectange: ");
    scanf("%d", &aire.longeur);

    calculRectangle(aire);

    return 0;
}


/*
Challenge 3 : Passage de Structure en Argument
Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur. 
Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle. 
Affichez l'aire dans le programme principal.
*/