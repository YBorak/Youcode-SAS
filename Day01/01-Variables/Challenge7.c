#include <stdio.h>

int main() {

    float n1, n2, n3;
    float m;

    printf("Entrer la valeur de n1: ");
    scanf("%d", &n1);
    printf("Entrer la valeur de n2: ");
    scanf("%d", &n2);
    printf("Entrer la valeur de n3: ");
    scanf("%d", &n3);

    m = (n1+n2+n3)/3;

    printf("la moyenne ponderee de trois nombres donnes par lutilisateur est: %.2f", m);

    return 0;
}


/*
Challenge 7 : Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5
*/