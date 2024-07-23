#ifndef RACIONAL_H
# define RACIONAL_H
# include "common.h"
# define RACIONAL_MAX SHRT_MAX
# define RACIONAL_MIN SHRT_MIN

typedef	struct racional
{
	short	numerador;
	short	denominador;
}				racional_t;

/*
* Inicializadores
*/

// crea un nuevo numero racional con numerador "numerador" y denominador "denominador"
racional_t	r_new_racional(short numerador, short denominador);
/*
* convierte un entero a racional
* ATENCIÓN, CAST FORZOSO NO CONTROLADO, SI EL NUMERO SUPERA SHRT_MAX O ES MENOR A SHRT_MIN EL COMPORTAMIENTO ES INDEFINIDO
*/
racional_t	r_int_a_racional(int entero);

/*
* Operaciones con racionales
*/

// suma dos numeros racionales
racional_t	r_sumar(racional_t n1, racional_t n2);
// resta dos numeros racionales
racional_t	r_restar(racional_t n1, racional_t n2);
// multiplica dos numeros racionales
racional_t	r_multiplicar(racional_t n1, racional_t n2);
// divide dos numeros racionales
racional_t	r_dividir(racional_t n1, racional_t n2);

#endif