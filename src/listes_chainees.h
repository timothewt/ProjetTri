#ifndef __LISTES_CHAINEES_H__
#define __LISTES_CHAINEES_H__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Structure des seaux (liste chaînée)
 * valeur : représente un nombre entier
 */
typedef struct elem {
    char* valeur;
    struct elem * suivant;
} element;

typedef struct elem * Seau;

/**
 * Ajoute n en queue de l
 * @param l : liste à laquelle ajouter en queue
 * @param n : nombre à ajouter en queue
 * @return liste l avec n ajouté en queue
 */
Seau ajouterQueue(Seau l, char* n);
/**
 * Accède au suivant de l
 * @param l : liste dont on cherche le suivant
 * @return le suivant de l'élément actuel dans la liste l
 */
Seau suivant(Seau l);
/**
 * initialise le tableau de seaux (tableau de listes)
 * @param seaux : tableau de listes
 * @param B : base des nombres qui correspond au nombre de seaux
 */
void initSeaux(Seau * seaux, int B);
/**
 * Affiche la liste l à l'écran
 * @param l : liste à afficher
 */
void afficherListe(Seau l);

#endif