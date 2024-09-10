#include <stdio.h>

int main() {

    int i;
    int note[10];


    typedef struct {
        char nom[20];
        char prenom[20];
    } etudiant;

    etudiant eleve;

    printf("Entrer le nom de letudient: ");
    scanf("%s", eleve.nom);

    printf("Entrer le prenom de letudient: ");
    scanf("%s", eleve.prenom);

    printf("Entrer la note de letudient: ");
    scanf("%d", &note[0]);

    printf("l etudiant %s %s, il a eu %d en note general", eleve.prenom, eleve.nom, note[0]);

    return 0;
}

/*
Challenge 2 : Structure avec Tableau
Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom, prenom, 
et un tableau d'entiers pour stocker les notes. 
Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.
*/