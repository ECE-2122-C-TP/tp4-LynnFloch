//
// Created by FLOC'H LYNN on 29/09/2021.
//

#include<stdio.h>
#include "fonctionsTD4.h"

/* Fonction qui donne l'entier le plus grand entre 2 entiers.
 * Paramètres :
 * - IN : n1, n2, les 2 entiers dont on veut savoir qui est le plus grand.
 * - OUT : la plus grande valeur entre n1 et n2. (entier)
 */
int getMax(int n1, int n2)
{

    (n1>n2)
    ? printf("Le plus grand entier est : %d \n",n1)
    : printf("Le plus grand entier est : %d \n",n2);

    return 0;
}
// IN : n, l'entier saisi par l'utilisateur
// OUT : n, l'entier saisi par l'utilisateur

int saisirEntier()
{
    int n;
    printf("Saisissez un entier au clavier. \n");
    scanf("%d", &n);

    return n;
}

// IN : la largeur et la longueur du rectangle
// OUT : l'aire du rectangle

int calculAire(int largeur, int longueur)
{
    int aire;

    aire = longueur*largeur;

    return aire;
}
// IN : la largeur et la longueur du rectangle
// OUT : le périmètre du rectangle

int calculPerimetre(int largeur, int longueur)
{
    int perimetre;

    perimetre = (2*largeur)+(2*longueur);

    return perimetre;
}
// IN : n1 et n2, 2 entiers dont on veut savoir si n1 est un multiple de l'autre.
// OUT : 1 si n1 est un multiple de n2, 0 sinon.

int multipleEntier(int n1, int n2)
{

    if (n1%n2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// IN : les 3 notes.
// OUT : Renvoie la moyenne de ses 3 notes ou erreur si l'une d'entre elles n'est pas comprise entre 0 et 20.

float moyenne(int note1, int note2, int note3)
{
    float moyenne3notes;

    if (note1 <0 || note1>20)
    {
        return -1;
    }
    else if (note2 <0 || note2>20)
    {
        return -1;
    }
    else if (note3 <0 || note3>20)
    {
        return -1;
    }
    else
    {
        moyenne3notes = (note1 + note2 + note3)/3;
        return moyenne3notes;
    }
}

// IN : un entier dont on veut savoir si c'est un multiple de 2 et de 7.
// OUT : 1 s'il est un multiple de 2 et de 7, 0 sinon.

int multiple2Et7(int entier)
{
    if (entier%2==0 && entier%7==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// IN : nombre de pierres disponibles.
// OUT : nombre d'étages possibles avec les pierres.

int nombreEtages(int nombrePierres)
{
    int nombrePierresRestantes, nombrePierresUtilisées, nombreEtages=0;

    nombrePierresRestantes = nombrePierres;

    while (nombrePierresRestantes >= nombreEtages * nombreEtages)
    {
        nombrePierresUtilisées = nombrePierresUtilisées + nombreEtages * nombreEtages;

        nombrePierresRestantes = nombrePierresRestantes - nombrePierresUtilisées;

        nombreEtages++;

    }
    return nombreEtages;
}