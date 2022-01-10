#ifndef TABLE_DECLA_H
#define TABLE_DECLA_H
#include <stdio.h>
#include <stdlib.h>
#include "tableRepre.h"

int getRegion();

void setRegion(int plus);

int verifRegion(int lexAssocie);

int tailleType(int lexType);

int chercheType(int region,int lexeme);

void ajoutTypeStruct(int lexAssocie,int taille);

void ajoutTypeTab(int lexAssocie,int taille);

void ajoutVariable(int lexAssocie,int typeAssocie);

void ajoutParam(int lexAssocie,int typeAssocie);

void ajoutFonction(int lexAssocie);

void ajoutProcedure(int lexAssocie);

void initDecla();

int DescClass(int indice);
int ExecClass(int desc);

void AfficherTD();
#endif