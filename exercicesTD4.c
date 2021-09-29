//
// Created by FLOC'H LYNN on 27/09/2021.
//

/* Fonction qui donne l'entier le plus grand entre 2 nombres.
 * Paramètres :
 * - IN : n1, n2, les 2 entiers dont on veut savoir qui est le plus grand.
 * - OUT : la plus grande valeur entre n1 et n2. (entier)
 */

#include<stdio.h>
#include "exercicesTD4.h"
#include "fonctionsTD4.h"

// EXERCICE 1

void exercice1()
{
    int max, n1, n2;

    printf("Saisir l'entier 1. \n");
    scanf("%d",&n1);

    printf("Saisir l'entier 2. \n");
    scanf("%d",&n2);

    max = getMax (n1,n2);

    return;
}

// EXERCICE 2

void exerice2()
{
    int entier;

    entier = saisirEntier();

    printf("L'entier saisi est : %d\n", entier);

    return;
}

// EXERCICE 3

void exercice3()
{
    int largeur, longueur, aire, périmètre;

    largeur = saisirEntier();
    longueur = saisirEntier();

    aire = calculAire(largeur, longueur);
    périmètre = calculPerimetre(largeur, longueur);
    printf("L'aire de ce rectangle est %d et son périmètre est %d. \n",aire,périmètre);

    return;
}

// EXERCICE 4

#define SUPERIEUR_EGAL 10
void exercice4()
{
    int a, entier;

    a = saisirEntier();

    entier = multipleEntier(a, 3);

    (entier == 1)
    ? printf("%d est un multiple de 3. \n",a)
    : printf("%d n'est pas un multiple de 3. \n",a);


    (a > SUPERIEUR_EGAL)
    ? printf("L'entier %d saisi au clavier est supérieur ou égal à 10. \n ", a)
    : printf("L'entier %d saisi au clavier est inférieur à 10. \n ",a );

    return;
}

// EXERCICE 5

void exercice5()
{
    int note1, note2, note3;
    float moyenneFinale;

    note1 = saisirEntier();
    note2 = saisirEntier();
    note3 = saisirEntier();

    moyenneFinale = moyenne(note1,note2,note3);

    if (moyenneFinale >=0)
    {
        printf("La moyenne des 3 notes est : %f. \n", moyenneFinale);
    }
    else
    {
        printf("L'une des 3 notes saisies est négatives ou supérieures à 20. \n");
    }

    return;
}

// EXERCICE 8 TD3 AMELIORE

void exercice8ameliore()
{
    int n=0, resultat;
    n = saisirEntier();
    resultat = multiple2Et7(n);

    while (resultat != 1)
    {
        printf("L'entier saisi %d n'est pas un multiple de %d et de %d. \n",n,2,7);
        n=saisirEntier();
    }

    printf("L'entier saisi %d est un multiple de 2 et de 7.\n ",n);
}

// EXERCICE 9 TD3 AMELIORE

void exercice9ameliore()
{
    int nombrePierres, etagesRealisables;


    nombrePierres = saisirEntier();

    etagesRealisables = nombreEtages(nombrePierres);


    printf("Avec %d pierres, vous pouvez construire %d étages.", nombrePierres, etagesRealisables);
}
