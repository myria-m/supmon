#include "supmon.h"

void choisirStarter(Joueur *joueur) {
    int choix_nombre;
    printf(" +-------------------------------+\n");
    printf(" | Choose your starter Supemon : |\n");
    printf(" |     1 - Supmander             |\n");
    printf(" |     2 - Supasaur              |\n");
    printf(" |     3 - Supirtle              |\n");
    printf(" +-------------------------------+\n");
 
    printf("1, 2, or 3: ");
    scanf("%d", &choix_nombre);
 
    if (choix_nombre < 1 || choix_nombre > 3) {
        printf("Choix invalide. Veuillez choisir un nombre entre 1 et 3.\n");
        exit(1); // Quitter le programme en cas de choix invalide
    }
 
    printf("Vous avez choisi le Supemon : %d\n", choix_nombre);
    // Ajoute le code pour initialiser le Supemon choisi dans l'équipe du joueur
}
 
// Fonction pour gérer les différentes destinations
void choisirDestination(Joueur *joueur) {
    char choix;
    while (1) {
        printf("+--------------------------------+\n");
        printf("| Where do you want to go ?      |\n");
        printf("|     1 - Into the Wild          |\n");
        printf("|     2 - In the shop            | \n");
        printf("|     3 - In the Supemon Center  |\n");
        printf("|     4 - Leave the Game         |\n");
        printf("+--------------------------------+\n");
 
        printf("1, 2, 3, or 4: ");
        scanf(" %c", &choix);
 
        switch (choix) {
            case '1':
                printf("Vous êtes en pleine nature. Un Supémon sauvage apparaît ! Combat enclenché.\n");
                // Ajoute le code pour le combat ici
                break;
 
            case '2':
                // Ajoute le code pour la boutique ici
                boutique(joueur);
                break;
 
            case '3':
                printf("Centre de Supémon : Soigner tous les Supémons (sans frais).\n");
                // Ajoute le code pour soigner les Supémons ici
                break;
 
            case '4':
                printf("Voulez-vous sauvegarder la progression (o/n) ? ");
                scanf(" %c", &choix);
                if (choix == 'o' || choix == 'O') {
                    // Ajoute le code pour sauvegarder ici
                    printf("Progression sauvegardée.\n");
                }
                printf("Au revoir !\n");
                exit(0);
                break;
 
            default:
                printf("Choix invalide. Veuillez choisir 1, 2, 3, ou 4.\n");
                break;
        }
    }
}
 
 