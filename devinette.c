 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere=0;
    int nombreUtilisateur=0;
    int essais = 0;

    srand(time(NULL));
    nombreMystere = rand() % 100 + 1;

    printf("Bienvenue dans le jeu du nombre mystere !\n");
    printf("Jai choisi un nombre entre 1 et 100. Devine-le !\n\n");

    do {
        printf("Ta proposition : ");
        scanf("%d", &nombreUtilisateur);
        essais++;

        if (nombreUtilisateur < nombreMystere) {
            printf("Trop petit !\n");
        } else if (nombreUtilisateur > nombreMystere) {
            printf("Trop grand !\n");
        } else {
            printf("Bravo ! Tu as trouve le nombre en %d tentatives \n", essais);
        }

    } while (nombreUtilisateur != nombreMystere);

    return 0;
}