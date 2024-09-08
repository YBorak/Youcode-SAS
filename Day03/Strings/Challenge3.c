#include <stdio.h>
#include <string.h>

int main() {

    char S1[20], S2[20];
    char S3[20]="Yassine ", S4[20]="Borak";

    printf("Entrer la chaine de characteres S1: ");
    scanf("%s", S1);
    printf("Entrer la chaine de characteres S2: ");
    scanf("%s", S2);

    strcat(S1, S2);
    strcat(S3, S4);

    printf("La concatenation de S1 et S2 est: %s\n", S1);
    printf("La concatenation de S3 et S4 est: %s", S3);

    return 0;
}

/*
Challenge 3 : Concaténation de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne. 
Affichez la chaîne résultante.
*/
