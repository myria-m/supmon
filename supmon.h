#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Structure pour représenter un Supémon
typedef struct {
    char nom[20];
    int points;
} Supemon;
 
typedef struct {
    char nom[20];
    char description[50];
    int prix;
} Objet;
 
typedef struct {
    char nom[20];
    Supemon equipe[3];
    Supemon supemonSelectionne;
    int supcoins;
    Objet inventaire[10];
} Joueur;


void obtenirSupemon(Joueur *joueur);
void chargerSauvegarde(Joueur *joueur);
void choisirStarter(Joueur *joueur);
void choisirDestination(Joueur *joueur);
//void afficherListeObjets(Objet *listeObjets, int taille);
void boutique(Joueur *joueur);