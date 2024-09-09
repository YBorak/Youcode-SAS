#include <stdio.h>
#include <string.h>


int main() {

   char str1[20], str2[20];
    int i;

    printf("Entrer la valeur de string1: ");
    scanf("%s", str1);
    printf("Entrer la valeur de string2: ");
    scanf("%s", str2);

    if(strcmp(str1, str2)==0){
        printf("str 1 et str2 sont egales");
    } else {
        printf("str 1 et str2 sont pas egales");
    }

    return 0;
}

/*
Challenge 4 : Comparaison de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non. 
Affichez un message indiquant si les chaînes sont égales ou différentes.
*/