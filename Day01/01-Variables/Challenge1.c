#include <stdio.h>
#include <string.h>


int main() {

    char nom[18], prenom[18];
    int age;
    char sexe;
    char adresse_email[15];

    printf("Entrer votre sexe: ");
    scanf("%c", &sexe);
    printf("Entrer votre nom: ");
    scanf("%s", &nom);
    printf("Entrer votre prenom: ");
    scanf("%s", &prenom);
    printf("Entrer votre age: ");
    scanf("%d", &age);
    printf("Entrer votre adresse email: ");
    scanf("%s", &adresse_email);

    printf("votre nom est: %s\n", nom);
    printf("votre nom est: %s\n", prenom);
    printf("votre nom est: %d\n", age);
    printf("votre nom est: %c\n", sexe);
    printf("votre nom est: %s\n", adresse_email);

    return 0;
}

/*Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.*/
