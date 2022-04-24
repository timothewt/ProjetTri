#include <stdio.h>
#include "listes_chainees.h"
#include "entrees_utilisateurs.h"
#include "seaux.h"

int t, n, B = 0;

Seau main(){

	Seau ListeNb = NULL;
    entrerParametres(&B, &t, &n);
    ListeNb = entrerNombres(ListeNb, n, t, B);

    printf("\nListe %c trier :\n", 133);
    afficherListe(ListeNb);

    Seau ListeResultat = trierListe(ListeNb, t, B);

    printf("\nListe tri%ce :\n", 130);
    afficherListe(ListeResultat);

    return ListeResultat;
}