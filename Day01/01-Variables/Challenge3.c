#include <stdio.h>

int main() {

    float Km, Yards;

    printf("la distance en kilometres: ");
    scanf("%f", &Km);

    Yards = Km * 1093.61;

    printf("la distance en yards est: %.2f", Yards);

    return 0;
}

/*Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

Yards = Km * 1093.61 
*/