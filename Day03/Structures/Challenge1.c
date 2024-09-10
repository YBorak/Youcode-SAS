#include <stdio.h>

int main() {

    typedef struct {
        char nom[20];
        char prenom[20];
        int age;
    } personne;

    personne perso;

    printf("Entrer votre nom: ");
    scanf("%s", perso.nom);

    printf("Entrer votre prenom: ");
    scanf("%s", perso.prenom);

    printf("Entrer votre age: ");
    scanf("%d", &perso.age);

    printf("je m appellle %s %s j ai %d ans.", perso.prenom, perso.nom, perso.age);

    return 0;
}

/*
Challenge 1 : Définition et Utilisation de Structure
Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age. 
Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.
*/