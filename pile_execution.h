#include<stdio.h>
#include<limits.h>
#ifndef PILE_EXECUTION_H
#define PILE_EXECUTION_H
#define MAX_PILE 500
/* bc -> la base courrante 
  loc -> la localisation actuelle 
  reg -> num de la region courrante */
int bc=0,loc=0,reg=0;
int pile[MAX_PILE];

void init_pile();
void changer_bc();
void chainage_dyna();
void chainage_static();
void affiche_pile();

#endif