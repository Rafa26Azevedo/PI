/*****************************************************************//**
 * \file   Aula.c
 * \brief  Arrays em C
 * conjunto de valores do mesmo tipo e dados!!!!
 * 
 * tipoDados NomeArray[Dimens�o]
 * Nota:
 * Caracteres portugueses:
 * 
 *  setlocale(LC_ALL, "en_US.utf8");
 *  ...
 *  puts(u8"Ol�");
 * 
 * \author lufer
 * \date   November 2020
 *********************************************************************/
#include "Tipos.h"
#include <stdio.h>
#include <string.h>

int main() {

#pragma region ARRAYS
    //int notas[MAX];                   //declara��o
    setlocale(LC_ALL, "en_US.utf8");    //mostrar caracteres portugueses

    int notas[MAX] = { 12, -4, 0 };     //declara��o e inicializa��o

    printf("%d \n", notas[0]);

    notas[0] = 2 * notas[1];
    notas[1]++;     //notas[1] = notas[1]+1;

    //mostrar todos os valore do array
    //h1
    printf("%d \n", notas[0]);
    printf("%d \n", notas[1]);
    printf("%d \n", notas[2]);

    //h2
    int i = 0;
    printf("%d \n", notas[i]);
    i++;
    printf("%d \n", notas[i]);
    i++;
    printf("%d \n", notas[i]);


    //h3
    i = 0;
    while (i < (MAX)) {
        printf("%d \n", notas[i]);
        i++;
    }

    //h4
    i = 0;
    do {
        printf("%d \n", notas[i]);
        i++;
    } while (i < (MAX));

    //h5
    for (i=0;i<(MAX);i++) {
        printf("%d \n", notas[i]);
    }

    //Ler valores para um array
    printf("Valores para o array\n");
    //scanf("%d", &i);
    //scanf("%d", &notas[0]);

    for (i = 0; i < MAX; i++) {
        printf("%d� Valor:", i+1 );
        scanf("%d", &notas[i]);
    }
    printf("\n");
    mostraArray(notas, MAX);
    printf("\n");
    boolean aux = mostraArrayII(notas, MAX);
    printf("\n");
    int size = sizeof(notas) / sizeof(notas[0]);
    printf("Tamanho do Array: %d\n", size);
    

    int x = 2, y = 3;
    x = incValor(x);
    incValorII(&x);

    //Uso de par�metros vari�veis
    troca(x, y);
    trocaII(&x,&y);
    printf("%s\n",(existeValor(notas, MAX, 0)==true ? "Existe" : "N�o Existe") );

#pragma endregion


}
