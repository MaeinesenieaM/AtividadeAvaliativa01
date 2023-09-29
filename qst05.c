#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");

	int x1, x2, y1, y2;

	printf ("\n!###Distancia de Planos###!\n\n");

	printf ("\nDigite as coordenadas do primeiro Plano.\n");
	printf (" X: "); scanf ("%d", &x1); 
	printf (" Y: "); scanf ("%d", &y1);
	printf ("\nDigite as coordenadas do segundo Plano.\n");
	printf (" X: "); scanf ("%d", &x2); 
	printf (" Y: "); scanf ("%d", &y2);

	//As potencias e raizes do calculo basicamente anula numeros negativos e transforma em positivos
	double resultado = sqrt ( pow ((x2 - x1), 2) + pow ((y2 - y1), 2) );

	printf ("\nA distancia entre os planos é : %.4lf", resultado);	

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}