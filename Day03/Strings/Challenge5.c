#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char str[20];

    printf("Entrer votre chaine: ");
    scanf("%s", str);

    int p=0; // premier index
    int d = strlen(str) -1; // dernier index
    char tmp;

        while (p < d){

            tmp = str[p];
            str[p] = str[d];
            str[d] = tmp;

            p++;
            d--;
        }
    printf("la chaine inversee est %s", str);
    return 0;
}

/*
Challenge 5 : Inversion de Chaîne
Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. 
Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".
*/