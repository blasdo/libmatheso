#include <racional.h>
#include <racional.h>

racional_t	r_new_racional(short numerador, short denominador)
{
	racional_t	result;

	result.numerador = numerador;
	result.denominador = denominador;
	return(result);
}

racional_t	r_int_a_racional(int entero)
{
	racional_t	result;
	result.numerador = (short) entero;
	result.denominador = 1;
	return (result);
}