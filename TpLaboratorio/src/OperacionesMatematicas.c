#include <stdio.h>
#include <stdlib.h>
#include "OperacionesMatematicas.h"

/**
 * \brief suma un numero flotante con otro numero flotante y devuelve el retorno de la funcion
 * \param float primerNumeroA recibe un valor para operar con el
 * \param float segundoNumeroB recibe un valor para operar con el
 * \param float pResultadoSuma es un puntero que recibe la direccion de memoria de una variable donde ingresa el resultado
 * \return retorna -1 si no pudo validar el puntero y retorna 0 si no se encontro ningun error
 */
int utn_sumarFloat (float primerNumeroA,float segundoNumeroB,float* pResultadoSuma)
{
	int retorno = -1;
	if (pResultadoSuma != NULL)
	{
		*pResultadoSuma=primerNumeroA+segundoNumeroB;
		retorno = 0;
	}
	return retorno;
}

/**
 * \brief resta un numero flotante con otro numero flotante y devuelve el retorno de la funcion
 * \param float primerNumeroA recibe un valor para operar con el
 * \param float segundoNumeroB recibe un valor para operar con el
 * \param float pResultadoSuma es un puntero que recibe la direccion de memoria de una variable donde ingresa el resultado
 * \return retorna -1 si no pudo validar el puntero y retorna 0 si no se encontro ningun error
 */
int utn_restaFloat (float primerNumeroA,float segundoNumeroB,float* pResultadoResta)
{
	int retorno = -1;
		if (pResultadoResta != NULL)
		{
			*pResultadoResta=primerNumeroA-segundoNumeroB;
			retorno = 0;
		}

	return retorno;
}

/**
 * \brief multiplica un numero flotante con otro numero flotante y devuelve el retorno de la funcion
 * \param float primerNumeroA recibe un valor para operar con el
 * \param float segundoNumeroB recibe un valor para operar con el
 * \param float pResultadoSuma es un puntero que recibe la direccion de memoria de una variable donde ingresa el resultado
 * \return retorna -1 si no pudo validar el puntero y retorna 0 si no se encontro ningun error
 */
int utn_multiplicacionFloat (float primerNumeroA,float segundoNumeroB,float* pResultadoMultiplicacion)
{
	int retorno = -1;

	if (pResultadoMultiplicacion!=NULL)
	{
		if (primerNumeroA==0||segundoNumeroB==0)
		{
			*pResultadoMultiplicacion=0;
			retorno = 0;
		}
		else
		{
			*pResultadoMultiplicacion=primerNumeroA*segundoNumeroB;
			retorno = 0;
		}
	}

	return retorno;
}

/**
 * \brief divide un numero flotante con otro numero flotante y devuelve el retorno de la funcion
 * \param float primerNumeroA recibe un valor para operar con el
 * \param float segundoNumeroB recibe un valor para operar con el
 * \param float pResultadoSuma es un puntero que recibe la direccion de memoria de una variable donde ingresa el resultado
 * \return retorna -2 si el dicisor es 0, retorna -1 si no pudo validar el puntero y retorna 0 si no se encontro ningun error
 */
int utn_divisionFloat (float primerNumeroA,float segundoNumeroB,float* pResultadoDivision)
{
	int retorno = -1;
	if (pResultadoDivision!=NULL)
	{
		if (segundoNumeroB==0)
		{
			retorno=-2;
		}
		else
		{
			*pResultadoDivision=primerNumeroA/segundoNumeroB;
			retorno=0;
		}
	}


	return retorno;
}

/**
 * \brief resta un numero flotante con otro numero flotante y devuelve el retorno de la funcion
 * \param float primerNumeroA recibe un valor para operar con el
 * \param float segundoNumeroB recibe un valor para operar con el
 * \param float pResultadoSuma es un puntero que recibe la direccion de memoria de una variable donde ingresa el resultado
 * \return retorna -2 si el numero ingresado es negativo, retorna -1 si no pudo validar el puntero y retorna 0 si no se encontro ningun error
 */
int utn_factorialFloat (float primerNumeroA,float* pResultadoFactorial)
{
	 int retorno =-1;
	 int i;
	 float acumulador;
	 int flag=1;//Flag para inicializar "acumulador"

	if (pResultadoFactorial!=NULL)
	{

		if (primerNumeroA>1)
		{
			for (i=1;i<primerNumeroA;i++)
			{
				if (flag==1)
				{
					acumulador=primerNumeroA;
					flag=0;
				}
				acumulador=acumulador*i;
			}
			*pResultadoFactorial=acumulador;
			retorno=0;
		}
		else if (primerNumeroA==1||primerNumeroA==0)
		{
			*pResultadoFactorial=1;
			retorno=0;
		}
		else
		{
			retorno=-2;//Numero ingresado es negativo
		}
	}

	 return retorno;
}

/**
 * \brief Pide un numero al usuario y devuelve el retorno de la funcion
 * \param float limiteMaximo recibe un valor que delimita un maximo
 * \param float limiteMinimo recibe un valor que delimina un minimo
 * \param float pNumeroIngresado es un puntero que recibe el numero ingresado del usuario y lo manda a la direccion de memoria de la variable
 * \param char pMensaje se ingresa el mensaje que se quiere mostrar al usuario
 * \param char pMensajeError se ingresa un mensaje que se muestra solo si el usuario ingreso un dato incorrecto
 * \param int intentos se ingresa la cantidad de intentos que tiene el usuario para ingresar bien el dato pedido
 * \return retorna -1 si no pudo validar el puntero y retorna 0 si no se encontro ningun error
 */
int utn_getFloat (float limiteMaximo, float limiteMinimo,float* pNumeroIngresado, char* pMensaje, char* pMensajeError, int intentos)
{
	int retorno=-1;
	float buffer;
	int i;

	if (limiteMaximo>=limiteMinimo&&pNumeroIngresado!=NULL&&pMensaje!=NULL&&pMensajeError!=NULL&&intentos>=0)
	{
		for(i=0;i<intentos;i++)
		{
			printf("%s",pMensaje);
			fflush(stdin);
			scanf("%f",&buffer);
			if (buffer<=limiteMaximo&&buffer>=limiteMinimo)
			{
				*pNumeroIngresado=buffer;
				retorno=0;
				break;
			}
			else
			{
				printf("%s",pMensajeError);
			}
		}

	}
	return retorno;
}


