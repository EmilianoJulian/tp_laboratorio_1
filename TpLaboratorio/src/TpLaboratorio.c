/*
 ============================================================================
 Name        : TpLaboratorio.c
 Author      : Emiliano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "OperacionesMatematicas.h"

int main(void)
{
	setbuf(stdout,NULL);
	float primerNumeroA;
	float segundoNumeroB;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	float resultadoFactorialPrimerNumeroA;
	float resultadoFactorialSegundoNumeroB;

	if(utn_getFloat(1000, -1000, &primerNumeroA, "Ingrese cualquier numero\n", "El numero que usted ingreso no es valido.\n", 2)==0)
	{
		if(utn_getFloat(1000, -1000, &segundoNumeroB, "Ingrese nuevamente cualquier numero\n", "El numero que usted ingreso no es valido.\n", 2)==0)
		{
			if (utn_sumarFloat(primerNumeroA, segundoNumeroB, &resultadoSuma)==0)
			{
				printf("El resultado de %.2f + %.2f es %.2f\n",primerNumeroA,segundoNumeroB,resultadoSuma);
			}

			if (utn_restaFloat(primerNumeroA, segundoNumeroB, &resultadoResta)==0)
			{
				printf("El resultado de %.2f - %.2f es %.2f\n",primerNumeroA,segundoNumeroB,resultadoResta);
			}

			if (utn_multiplicacionFloat(primerNumeroA, segundoNumeroB, &resultadoMultiplicacion)==0)
			{
				printf("El resultado de %.2f * %.2f es %.2f\n",primerNumeroA,segundoNumeroB,resultadoMultiplicacion);
			}

			if (utn_divisionFloat(primerNumeroA, segundoNumeroB, &resultadoDivision)==0)
			{
				printf("El resultado de %.2f / %.2f es %.2f\n",primerNumeroA,segundoNumeroB,resultadoDivision);

			}
			else if (utn_divisionFloat(primerNumeroA, segundoNumeroB, &resultadoDivision)==-2)
			{
				printf("La division no es posible de hacer\n");
			}

			if (utn_factorialFloat(primerNumeroA, &resultadoFactorialPrimerNumeroA)==0)
			{
				printf("El factorial de %.2f es %.2f\n",primerNumeroA,resultadoFactorialPrimerNumeroA);
			}
			else if (utn_factorialFloat(primerNumeroA, &resultadoFactorialPrimerNumeroA)==-1)
			{
				printf("No existe el factorial de un numero negativo. \n");
			}

			if (utn_factorialFloat(segundoNumeroB, &resultadoFactorialSegundoNumeroB)==0)
			{
				printf("El factorial de %.2f es %.2f\n",segundoNumeroB,resultadoFactorialSegundoNumeroB);
			}
			else if (utn_factorialFloat(segundoNumeroB, &resultadoFactorialSegundoNumeroB)==-1)
			{
				printf("No existe el factorial de un numero negativo. \n");
			}

			printf("Los numeros que usted ingreso son: %.2f ; %.2f",primerNumeroA,segundoNumeroB);
		}
	}




}

