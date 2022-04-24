#include "seaux.h"

void ajouterDansSeau(Seau * sceaux, char c, char * nb) {
    if(c >= 48 && c <= 57) { // valeurs ASCII de '0' à '9'
        sceaux[c-48] = ajouterQueue(sceaux[c-48], nb);
    } else if (c >= 65 && c <= 70) { // lettres majuscules ; conversion des lettres A-F en nombres 10-15 (ASCII)
        sceaux[c-55] = ajouterQueue(sceaux[c-55], nb);
    } else { // lettres minuscules
        sceaux[c-87] = ajouterQueue(sceaux[c-87], nb);
    }
}

Seau relierSeaux(Seau * LSeaux, int B) {
    Seau ListeResultat = NULL;
    for (int i = 0; i < B; ++i) {
        Seau LTemp = LSeaux[i];
        while(LTemp != NULL) {
            ListeResultat = ajouterQueue(ListeResultat, LTemp->valeur);
            LTemp = suivant(LTemp);
        }
    }
    return ListeResultat;
}

Seau trierListe(Seau ListeNb, int t, int B) {
    Seau * seaux = (Seau *)malloc(B * sizeof(Seau));
    Seau ListeResultat = ListeNb;
    for (int i = t - 1; i >= 0 ; i--) { // effectue l'opération pour tous les seaux
        initSeaux(seaux, B);
        Seau LTemp = ListeResultat;
        while(LTemp != NULL) {
            char * nb = LTemp->valeur;
            ajouterDansSeau(seaux, nb[i], nb);
            LTemp = suivant(LTemp);
        }
        ListeResultat = relierSeaux(seaux, B);
        printf("\nEtape %d :\n", t - i);
        afficherListe(ListeResultat);
    }
    return ListeResultat;
}