#ifndef __ENTREES_UTILISATEUR_H__
#define __ENTREES_UTILISATEUR_H__
#include "listes_chainees.h"

/**
 * Demande à l'utilisateur la base des nombres à trier, la taille des nombres et la quantité de nombres
 * @param B : base  à utiliser
 * @param t : taille des nombres
 * @param n : quantité de nombres
 */
void entrerParametres(int * B, int * t, int * n);
/**
 * Complete le nombre avec des 0 devant lui, pour correspondre à la taille t (exemple si t=5 et str="123" donne "00123")
 * @param str : nombre à compléter
 * @param t : taille souhaitée
 */
void completerNombre(char * str, int t);
/**
 * Vérifie que le nombre str appartient à la base B
 * @param str : nombre à tester
 * @param B : base
 * @return 1 si le nombre appartient à B, 0 sinon
 */
int verifierBaseNombre(char * str, int B);
/**
 * Complète la liste de nombre ListeNb avec n nombres entrés par l'utilisateur
 * @param ListeNb : liste de nombres à compléter
 * @param n : quantité de nombres
 * @param t : taille des nombres
 * @param B : base des nombres
 * @return la liste de nombres ListeNb complétée.
 */
Seau entrerNombres(Seau ListeNb, int n, int t, int B);

#endif