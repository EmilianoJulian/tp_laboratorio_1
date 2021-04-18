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
	int opcion;
	float primerNumeroA;
	float segundoNumeroB;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	float resultadoFactorialPrimerNumeroA;
	float resultadoFactorialSegundoNumeroB;
	do
	{
		if (utn_getNumero(&opcion, "Seleccione una opcion\n\n1-Ingresar primer operador"
									  "\n2-Ingresar segundo operador\n3-Para calcular operaciones	"
									  "\n4-Resultados\n5-Salir\n\n", "No es una opcion valida \n", 1, 5, 2)==0)
		{
			switch (opcion)
			{
				case 1:
					printf("Primer operador (A=x)\n");
					if (utn_getFloat(1000, -1000, &primerNumeroA, "Ingrese un numero que se encuentre dentro del rango -1000 y 1000\n\n",
							"Usted no ingreso un numero valido\n", 3)==0)
					{
							printf("El primer operador que ingreso es: %.2f\n\n",primerNumeroA);
					}
					break;
				case 2:
					printf("Segundo operador (B=x)\n");
					if (utn_getFloat(1000, -1000, &segundoNumeroB, "Ingrese un numero que se encuentre dentro del rango -1000 y 1000\n\n",
							"Usted no ingreso un numero valido\n", 3)==0)
					{
						printf("El segundo operador que ingreso es: %.2f\n\n",segundoNumeroB);
					}
					break;
				case 3:
					if (utn_sumarFloat(primerNumeroA, segundoNumeroB, &resultadoSuma)==0)
					{
						printf("Calculando la suma (%.2f+%.2f)\n",primerNumeroA,segundoNumeroB);
					}
					if (utn_restaFloat(primerNumeroA, segundoNumeroB, &resultadoResta)==0)
					{
						printf("Calculando la resta (%.2f-%.2f)\n",primerNumeroA,segundoNumeroB);
					}
					if (utn_multiplicacionFloat(primerNumeroA, segundoNumeroB, &resultadoMultiplicacion)==0)
					{
						printf("Calculando la multiplicacion (%.2f*%.2f)\n",primerNumeroA,segundoNumeroB);
					}
					if (utn_divisionFloat(primerNumeroA, segundoNumeroB, &resultadoDivision)==0)
					{
						printf("Calculando la division ( %.2f / %.2f )\n",primerNumeroA,segundoNumeroB);
					}
					else if (utn_divisionFloat(primerNumeroA, segundoNumeroB, &resultadoDivision)==-2)
					{
						printf("La division no es posible de hacer\n");
					}

					if (utn_factorialFloat(primerNumeroA, &resultadoFactorialPrimerNumeroA)==0)
					{
						printf("Calculando el factorial (%.2f!) \n",primerNumeroA);
					}
					else if (utn_factorialFloat(primerNumeroA, &resultadoFactorialPrimerNumeroA)==-1)
					{
						printf("No existe el factorial de un numero negativo. \n");
					}

					if (utn_factorialFloat(segundoNumeroB, &resultadoFactorialSegundoNumeroB)==0)
					{
						printf("Calculando el factorial (%.2f!) \n\n",segundoNumeroB);
					}
					else if (utn_factorialFloat(segundoNumeroB, &resultadoFactorialSegundoNumeroB)==-1)
					{
						printf("No existe el factorial de un numero negativo. \n\n");
					}

					break;
				case 4:
					printf("El resultado de %.2f+%.2f es: %.2f\nEl resultado de %.2f-%.2f es:  %.2f\nEl resultado de %.2f/%.2f es:  %.2f\n"
							"El resultado de %.2f*%.2f es:  %.2f\nEl factorial de %.2f es: %.2f y El factorial de %.2f es: %.2f\n",primerNumeroA,segundoNumeroB
							,resultadoSuma,primerNumeroA,segundoNumeroB,resultadoResta,primerNumeroA,segundoNumeroB,resultadoDivision,primerNumeroA,segundoNumeroB
							,resultadoMultiplicacion,primerNumeroA,resultadoFactorialPrimerNumeroA,segundoNumeroB,resultadoFactorialSegundoNumeroB);
					break;
			}
		}
	}while(opcion!=5);

	return EXIT_SUCCESS;
}


