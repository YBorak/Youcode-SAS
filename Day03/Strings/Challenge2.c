#include <stdio.h>

int main() {

    char chaine[20];
    int i, len=0;

        printf("Entrer une chaine de caracteres: ");
        scanf("%s", chaine);
        for(i=0;i<20;i++){
            if(chaine[i] != '\0'){
                len++;
                }
            }
            printf("Affichage dune chaine de caractere: %d.", len);

    return 0;
}

/*
Challenge 2 : Longueur de la Chaîne
Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères 
sans utiliser la fonction strlen().
*/