#ifndef __SEAUX_H__
#define __SEAUX_H__
#include "listes_chainees.h"

/**
 * Ajoute le nombre nb dans le seau c (c va de 0 à F)
 * @param seaux : Tableau de listes représentant les seaux
 * @param c : numéro du seau
 * @param nb : nombre à insérer
 */
void ajouterDansSeau(Seau * seaux, char c, char * nb);
/**
 * Relie tous les seaux dans une seule liste
 * @param LSeaux : Tableau de listes représentant les seaux
 * @param B : base de nombres
 * @return liste chaînée contenant tous les seaux de LSeaux dans l'ordre
 */
Seau relierSeaux(Seau * LSeaux, int B);
/**
 * Trie la liste ListeNb en utilisant les fonctions précédentes.
 * @param ListeNb : liste à trier
 * @param t : taille des nombres
 * @param B : base des nombres
 * @return liste ListeNb triée
 */
Seau trierListe(Seau ListeNb, int t, int B);

#endif