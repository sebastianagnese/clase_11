/*
 ============================================================================
 Name        : bibliotecas.c
 Author      : agn
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* HELP FOR THE FAKE TP

typedef struct // (1, n)
{
	idAsociado
	nombre
	apellido
	DNI
	edad
	isEmpty

}eAsociado;

typedef struct // (1, 1)
{
	idLlamada
	motivo
	estado	   		// Pendiente/Cumplido //
	tiempo     		// ------ ???? ------ //
	idAsociado		// ------ ???? ------ //
	idAmbulancia
	isEmpty

}eLlamada;

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *p, *q;
	int x = 4;
	*p = x;
	q = p;
	*p +=3;
	printf("%d",*p);
	return 0;
}



