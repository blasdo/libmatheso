#include <racional.h>

racional_t	r_new_racional(short numerador, short denominador)
{
	racional_t	result;

	result.numerador = numerador;
	result.denuminador = denominador;
	return(result);
}

racional_t	r_int_a_racional(int entero)
{
	racional_t	result;
	if (entero > SHRT_MAX || entero < SHRT_MIN)
	{
		errno = ERANGE;
		result.numerador = 0;
		result.denuminador = 0;
		return (result);
	}
	result.numerador = (short) entero;
	result.denuminador = 1;
	return (result);
}