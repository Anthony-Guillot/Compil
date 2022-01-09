#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbre.h"

#ifndef TABLEREGION_H
#define TABLEREGION_H

typedef struct region
{
    int taille; /* taille de la region */
    int nis; /* numéro d'inbrication static */
    arbre repre; /* arbre de representation de la region */
}region;

#endif