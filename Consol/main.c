#include <stdio.h>
#include <stdlib.h>

#include "fonctions.c"

int main() {
    int tabini[TAILLE_GRILLE][TAILLE_GRILLE] = {
        {8, 2, 4},//{2, 0, 3},
        {6, 1, 5},
        {7, 3, 0}
    };

    int tabfin[TAILLE_GRILLE][TAILLE_GRILLE] = {
        {1, 2, 3},
        {8, 0, 4},
        {7, 6, 5}
    };

    Etat etatInitial, etatFinal;
    for (int i = 0; i < TAILLE_GRILLE; i++) {
        for (int j = 0; j < TAILLE_GRILLE; j++) {
            etatInitial.tableau[i][j] = tabini[i][j];
            etatFinal.tableau[i][j] = tabfin[i][j];
        }
    }
    etatInitial.g = 0;
RechercheAetoile(etatInitial, etatFinal);

    return 0;
}
