#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define Max 100

//int i;
//int Conteur = 0;
//int livreConteur = 0;

typedef struct {
    char titre[20]; 
    char auteur[20];
    float prix;
    int quantite;
} livre;

void Ajoutlivre();
//void Affichagelivre();
//void Updatelivre();
//void Suppressionlivre();
//void AffichageStock();


livre TG[100];
int i=0;

livre TA[100];
int iA;


int main(){

    int choix;

    do {

        printf("Menu de Gestion de Stock dans une Librairie\n");
        printf("1.Ajouter un Livre au Stock\n");
        printf("2.Afficher Tous les Livres Disponibles\n");
        printf("3.Mettre à Jour la Quantite d'un Livre\n");
        printf("4.Supprimer un Livre du Stock\n");
        printf("5.Afficher le Nombre Total de Livres en Stock\n");

        printf("Entrer votre choix: ");
        scanf("%d", &choix);

    } while (choix <0 && choix >6);

    switch(choix){

        case 1: Ajoutlivre(); break;
        //case 2: Affichagelivre(); break;
        //case 3: Updatelivre(); break;
        //case 4: Suppressionlivre(); break;
        //case 5: AffichageStock(); break;
        default:
            printf("Error resayer a nouveau"); 
    }

    return 0;
}

void Ajoutlivre(){

    livre liv;

    printf("Entrer le titre de livre: ");
    scanf("%s", &liv.titre);

    printf("Entrer lauteur de livre: ");
    scanf("%s", &liv.auteur);
    
    printf("Entrer combien de livre vous voulez ajouter: ");
    scanf("%f", &liv.quantite);

    printf("Entrer le prix de livre: ");
    scanf("%d", &liv.prix);

    TG[i++] = liv;
}

/*
void Affichagelivre(){


    printf("voici le prix de ce produit  :%f\n", TA[0].prix);
    printf("voi D' %d:%d\n", );

}


void Updatelivre(){

}

void Suppressionlivre(){

}

void AffichageStock(){

}
*/