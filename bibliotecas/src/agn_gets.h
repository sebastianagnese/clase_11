/*
 * agn_bibliotecas.h
 *
 *  Created on: 26 sep. 2019
 *      Author: Agnese, papu
 */

#ifndef AGN_GETS_H_
#define AGN_GETS_H_

int getInt(	int *pValor, char *pMSG, char *pMSGErr,
			int rangoMin, int rangoMax, int retry);

int initArrayInt(int *pArray, int limit, int valor);

int printeoArrayInt(int *pArray, int limit);

int cargaArrayInt(	int *pArray, int limit, char *pMSG,
					char *pMSGErr, int rangoMin, int rangoMax,
					int retry);

int OrdenaArrayInt(int* pArray, int limit);

int sumaArrayInt(int* pArray, int limit, int* resultado);

int restaArrayInt(int* pArray, int limit, int* resultado);

int multiplicaArrayInt(int* pArray, int limit, int* resultado);

int divideArrayInt(int* pArray, int limit, int* resultado);

int maxMinArrayInt(int* pArray, int limite, int* min, int* max);

int promedioArrayInt(int* pArray, int limit, int* valorProm);





#endif /* AGN_GETS_H_ */







