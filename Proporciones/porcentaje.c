#include "proporciones.h"

float porcientoDe(float parcial, float completo)
{
	return (parcial*100/completo);
}

float porcentajeDe(float porcentaje, float completo)
{
	return (porcentaje*completo/100);
}
float addPorcentaje(float porcentaje, float actual)
{
	float toAdd;
	toAdd = porcentajeDe(porcentaje, actual);
	return (actual + toAdd);
}
float restarProcentaje(float porcentaje, float actual)
{
	float aRestar;
	aRestar = porcentajeDe(porcentaje, actual);
	return (actual - aRestar);
}
