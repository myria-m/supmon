#include "supmon.h"
 
// Prototypes de fonctions

 
int main() {
    Joueur joueur;
    char choix;
    int choix_nombre;
 
    printf("Welcome in The Supemon World of myriam ! \n");
 
    printf("Veuillez choisir :\n\n");
    printf("a - Entrer un nom et obtenir un Supemon\n");
    printf("b - Charger une sauvegarde\n\n");
 
    printf("Votre choix (a ou b): ");
    scanf(" %c", &choix);
 
    switch (choix) {
        case 'a':
            obtenirSupemon(&joueur);
            break;
 
        case 'b':
            chargerSauvegarde(&joueur);
            break;
 
        default:
            printf("Choix invalide. Veuillez choisir 'a' pour entrer un nom ou 'b' pour charger une sauvegarde.\n");
            return 1; // Quitter le programme en cas de choix invalide
    }
 
    choisirStarter(&joueur);
 
    choisirDestination(&joueur);
 
    return 0;
}
 
// Fonction pour obtenir un nom et gagner un Supemon
void obtenirSupemon(Joueur *joueur) {
    printf("Entrer un nom : ");
    scanf("%s", joueur->nom);
 
    // Initialiser le Supémon du joueur (à personnaliser en fonction de la logique de ton jeu)
    // Exemple : Supémon avec 100 points de vie
    strcpy(joueur->equipe[0].nom, "Supémon de départ");
    joueur->equipe[0].points = 100;
    joueur->supcoins = 50; // Ajout manquant
    printf("Hello %s ! Vous avez reçu votre premier Supémon.\n", joueur->nom);
}
 
// Fonction pour charger une sauvegarde
void chargerSauvegarde(Joueur *joueur) {
    printf("Charger une sauvegarde : ");
    scanf("%s", joueur->nom); // Correction : Utiliser le champ nom du joueur pour stocker le nom du fichier de sauvegarde
    // Ajoute le code pour charger la sauvegarde ici
}
 
// Fonction pour choisir un starter Supemon

// Fonction pour gérer la boutique
void boutique(Joueur *joueur) {
    int choix_nombre;
 
    printf("\nBienvenue à la Boutique !\n\n");
    printf("Vous avez l'occasion d'acheter ou de vendre, vous obtenez un budget de %d Supcoins.\n\n", joueur->supcoins);
 
    // Afficher la liste des objets disponibles à la boutique
    printf("1. Potion - Soigne 20 points de vie (Prix : 10 Supcoins)\n");
    printf("2. Super Potion - Soigne 50 points de vie (Prix : 30 Supcoins)\n");
    printf("3. Potion de Force - Augmente l'attaque (Prix : 50 Supcoins)\n");
 
    // Demander au joueur de choisir un objet à acheter
    printf("Choisissez un objet à acheter (1, 2, 3 ou 0 pour quitter) : ");
    scanf("%d", &choix_nombre);
 
    // Traiter le choix du joueur
    if (choix_nombre >= 1 && choix_nombre <= 3) {
        // Vérifier si le joueur a suffisamment de Supcoins
        int prixObjet = 0;
 
        switch (choix_nombre) {
            case 1:
                prixObjet = 10;
                break;
            case 2:
                prixObjet = 30;
                break;
            case 3:
                prixObjet = 50;
                break;
        }
 
        if (joueur->supcoins >= prixObjet) {
            // Ajouter l'objet à l'inventaire du joueur et déduire le coût
            strcpy(joueur->inventaire[0].nom, "Nom de l'objet");  // Remplacer par le nom réel de l'objet
            strcpy(joueur->inventaire[0].description, "Description de l'objet");  // Remplacer par la description réelle de l'objet
            joueur->inventaire[0].prix = prixObjet;
            joueur->supcoins -= prixObjet;
 
            printf("Achat réussi ! Vous avez maintenant %d Supcoins.\n", joueur->supcoins);
        } else {
            printf("Fonds insuffisants. Choisissez un objet moins cher.\n");
        }
    } else if (choix_nombre != 0) {
        printf("Choix invalide.\n");
    }
}