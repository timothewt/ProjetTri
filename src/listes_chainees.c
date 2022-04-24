#include "listes_chainees.h"

Seau ajouterQueue(Seau l, char * n) {
    Seau nouvelElem = (Seau)malloc(sizeof(element));
    nouvelElem->valeur = (char *)malloc(sizeof(n));
    strcpy(nouvelElem->valeur, n);
    nouvelElem->suivant =  NULL;

    if(l == NULL) {
        return nouvelElem;
    } else {
        Seau temp = l;
        while(suivant(temp) != NULL) {
            temp = suivant(temp);
        }
        temp->suivant = nouvelElem;
        return l;    
    }
}

Seau suivant(Seau l) {
    return l->suivant;
}

void initSeaux(Seau * seaux, int B) {
    for (int i = 0; i < B; ++i) { // initialise chaque seau à NULL
        seaux[i] = NULL;
    }
}

void afficherListe(Seau l) {
    Seau temp = l;
    while(temp != NULL) {
        printf("%s ", temp->valeur);
        temp = suivant(temp);
    }
}