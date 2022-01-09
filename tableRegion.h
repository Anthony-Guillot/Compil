#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arbre.h"

#ifndef TABLEREGION_H
#define TABLEREGION_H

#define MAX_REGION 50

typedef struct region
{
    int taille; /* taille de la region */
    int nis; /* numéro d'inbrication static */
    arbre repre; /* arbre de representation de la region */
}region;

region tab_region[MAX_REGION];

#endif