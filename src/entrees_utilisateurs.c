#include <stdio.h>
#include <string.h>
#include "entrees_utilisateurs.h"

void entrerParametres(int * B, int * t, int * n) {
    while(*B < 2 || *B > 16) {
        printf("Entrez la base %c utiliser :", 133);
        scanf("%d", B);
    }
    while(*t < 1 || *t > 10) {
        printf("Quelle est la taille des nombres ? (max 10) :");
        scanf("%d", t);
    }
    while(*n < 1) {
        printf("Combien de nombres %c trier ? :", 133);
        scanf("%d", n);
    }
}

void completerNombre(char * str, int t) {
    int l = (int) strlen(str);
    if (strlen(str) != t) {
        char strTemp[t]; // crée une chaîne de caractère de la taille t
        strcpy(strTemp, str);
        for (int i = 0; i < t-l; i++) { // ajoute des 0 au début du nombre
            strTemp[i] = '0';
        }
        for (int i = 0; i < l; ++i) { // la fin du nombre est remplacée par "str"
            strTemp[i+t-l] = str[i];
        }
        strTemp[t] = '\0';
        strcpy(str, strTemp);
    }
}

int verifierBaseNombre(char * str, int B) {
    for(int i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 70) { // utilise les valeurs ASCII de 'A' à 'F'
            if(str[i] - 55 - B >= 0) {
                return 0;
            }
        } else if (str[i] >= 48 && str[i] <= 57) { // utilise les valeurs ASCII de '0' à '9'
            if (str[i] - 48 - B >= 0) {
                return 0;
            }
        } else {
            return 0;
        }
    }
    return 1;
}

Seau entrerNombres(Seau ListeNb, int n, int t, int B) {
    char str[t];
    for (int i = 0; i < n; i++) {
        printf("Entrez un nombre dans la liste :");
        scanf(" %s", &str);
        while(!verifierBaseNombre(str, B) || strlen(str) > t) { // si le nombre n'appartient pas à la base ou est trop long, le programme demande à nouveau
            printf("Base du nombre ou taille incorrecte, entrez à nouveau le nombre dans la liste :");
            scanf(" %s", &str);
        }
        completerNombre(str, t);
        ListeNb = ajouterQueue(ListeNb, str);
    }
    return ListeNb;
}