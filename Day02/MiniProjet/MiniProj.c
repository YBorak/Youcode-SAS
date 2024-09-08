#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char titre[20]; 
    char auteur[20];
    float prix;
    int quantite;
} livres;

int i;
int n;
livres TG[100];     //TABLEAU GENERAL
int compt=0;        //Compteur

void Ajoutlivre();
void Affichagelivre();
//void Updatelivre();
void Suppressionlivre();
void AffichageStock();

int main(){

    int choix;

    do {

        printf("\nMenu de Gestion de Stock dans une Librairie\n");
        printf("1.Ajouter un Livre au Stock\n");
        printf("2.Afficher Tous les Livres Disponibles\n");
        printf("3.Mettre a Jour la Quantite d'un Livre\n");
        printf("4.Supprimer un Livre du Stock\n");
        printf("5.Afficher le Nombre Total de Livres en Stock\n");

        printf("Entrer votre choix: ");
        scanf("%d", &choix);

        switch(choix){

        case 1: Ajoutlivre(); break;
        case 2: Affichagelivre(); break;
        //case 3: Updatelivre(); break;
        case 4: Suppressionlivre(); break;
        case 5: AffichageStock(); break;
        default:
            printf("Error resayer a nouveau."); 
    }

    } while (choix >0 && choix <6);

    return 0;
}

void Ajoutlivre(){

    livres livre;
    livre.id=0;

    for(i=0;i<compt+1;i++){
        livre.id++;
    }
    //scanf("%d", &livre.id);

    printf("Entrer le titre de livre: ");
    scanf("%s", livre.titre);

    printf("Entrer lauteur de livre: ");
    scanf("%s", livre.auteur);
    
    printf("Entrer combien de livre vous voulez ajouter: ");
    scanf("%d", &livre.quantite);

    printf("Entrer le prix de livre: ");
    scanf("%f", &livre.prix);

    TG[compt++] = livre;
    

    printf("\nle livre a ete ajoute avec sucsess.\n");
    printf("\n");
}


void Affichagelivre(){

    printf("\nEntrer le nombre de livre que vous voulez afficher: ");
    scanf("%d", &n);
    printf("\n");

    for(i=0;i<n;i++){
    printf("ID: %d, Titre: %s, Auteur: %s, Prix: %.2f, Quantite: %d ", TG[i].id, TG[i].titre, TG[i].auteur, TG[i].prix, TG[i].quantite);
    printf("\n");
    }
    printf("\nvous avez affichez %d livres.\n", n);
    printf("\n");
}

/*
void Updatelivre(){

}
*/
void Suppressionlivre(){

    int choixid, trouve=0;

    printf("\nEntrer le id de livre que vous voulez supprimer: ");
    scanf("%d", &choixid);
    printf("\n");

        for(i=0;i<compt+1;i++){
            if(TG[i].id == choixid){
                trouve=1;
            for(int j=i;j<compt;j++){
                TG[j] = TG[j+1];
                }
                compt--;
        }
    }
        for(i=compt+1;i>=0;i--){
            TG[i].id--;
        }

    if(trouve){
    printf("le livre a ete supprime avec sucsess.\n");
    printf("\n");
    } else {
        printf("le livre n'a pas ete trouve.\n");
    }
    
}


void AffichageStock(){

    int stock=0;

    for(i=0;i<compt;i++){
        stock+=TG[i].quantite;
    }
    printf("la quantite total de livre qui en biblio est: %d livres.",stock);
    printf("\n");

}



    