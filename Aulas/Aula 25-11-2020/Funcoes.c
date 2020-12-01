/*****************************************************************//**
 * \file   Funcoes.c
 * \brief  
 *  Manipula��o de Arrays simples
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include "Tipos.h"
#include <stdio.h>

/**
 * Apresenta o conte�do de um array
 */
void mostraArray(int x[], int size) {
    for (int i = 0; i < size ; i++) {
        //printf("%d� Valor: %d", i + 1, x[i]);
        printf("x[%d]=%d\n", i, x[i]);

    }
}

/**
 * Apresenta o conte�do de um array
 */
boolean mostraArrayII(int x[], int size) {
    if (size <= 0)
        return false;
    for (int i = 0; i < size; i++) {
        //printf("%d� Valor: %d", i + 1, x[i]);
        printf("x[%d]=%d\n", i, x[i]);
    }
    return true;
}