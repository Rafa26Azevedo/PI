/*****************************************************************//**
 * \file   Aula.c
 * \brief  Defini��o de novos tipos de dados
 * Enumerados
 * Typedef
 * 
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#include <stdio.h>
#include "Tipos.h"

int main(void) {

	boolean x = True;
	enum cores cor = RED;
	cores aux;				//colors � um tipo de dados (typedef)

	if (x == true) {

	}
	if (cor != GRAY) {

	}

	printf("DIA= %s\n", diaSemana(2));
}

