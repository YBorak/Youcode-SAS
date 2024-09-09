#include <stdio.h>
#include <string.h>

int main() {

    int i, nr=0; // nombre de repetition
    char str[20];
    char c; //caractere

    printf("Entrer la valeur de caractere: ");
    scanf("%c", &c);

    printf("Entrer la valeur de string: ");
    scanf("%s", str);

    for(i=0;str[i]!='\0';i++){
        if (str[i] == c){
            nr++;
            }
        }
    printf("le caractere apparait dans la chaine %d fois.", nr);

    return 0;
}

/*
Challenge 6 : Compte des Occurrences d'un Caractère
Écrivez un programme C qui lit une chaîne de caractères et un caractère, 
puis compte et affiche combien de fois le caractère apparaît dans la chaîne.
*/