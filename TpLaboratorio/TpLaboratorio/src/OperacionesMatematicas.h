/*
 * OperacionesMatematicas.h
 *
 *  Created on: 14 abr. 2021
 *      Author: Chicas
 */

#ifndef OPERACIONESMATEMATICAS_H_
#define OPERACIONESMATEMATICAS_H_

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_sumarFloat (float primerNumeroA,float segundoNumeroB,float* pResultadoSuma);
int utn_restaFloat (float primerNumeroA,float segundoNumeroB,float* pResultadoResta);
int utn_multiplicacionFloat (float primerNumeroA,float segundoNumeroB,float* pResultadoMultiplicacion);
int utn_divisionFloat (float primerNumeroA,float segundoNumeroB,float* pResultadoDivision);
int utn_factorialFloat (float primerNumeroA,float* pResultadoFactorial);
int utn_getFloat (float limiteMaximo, float limiteMinimo,float* pNumeroIngresado, char* pMensaje, char* pMensajeError, int intentos);

#endif /* UTN_H_ */
