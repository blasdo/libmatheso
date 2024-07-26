#include <racional.h>
#include <mcm_mcd.h>

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

racional_t	r_sumar(racional_t n1, racional_t n2)
{
	racional_t	result;

	if (n1.denominador != n2.denominador)
	{
		int com_den = mcm(n1.denominador, n2.denominador);
		n1.numerador = n1.numerador * (com_den / n1.denominador);
		n2.numerador = (n2.numerador * (com_den / n2.denominador));
		n1.denominador = (short)com_den;
		n2.denominador = (short) com_den;
	}
	result.numerador = n1.numerador + n2.numerador;
	result.denominador = n1.denominador;
	return (result);
}

racional_t	r_restar(racional_t n1, racional_t n2)
{
	n2.numerador = -n2.numerador;
	return(r_sumar(n1, n2));
}

racional_t	r_multiplicar(racional_t n1, racional_t n2)
{
	racional_t result;

	result.numerador = n1.numerador * n2.numerador;
	result.denominador = n1.denominador * n2.denominador;
	return (result);
}

racional_t	r_dividir(racional_t n1, racional_t n2)
{
	racional_t	result;

	result.numerador = n1.numerador * n2.denominador;
	result.denominador = n1.denominador * n2.numerador;
	return (result);
}

racional_t	r_simplificar(racional_t n)
{
	racional_t	result;
	int			_mcd;

	_mcd = mcd(n.numerador, n.denominador);
	result.numerador = n.numerador / _mcd;
	result.denominador = n.denominador / _mcd;
	return (result);
}