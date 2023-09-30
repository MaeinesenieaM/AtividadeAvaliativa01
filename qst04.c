#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
	float A, B, C; // Retas.
	double a, b, c; // Ângulos
	float angulomax; // Maior Ângulo do Triângulo
/*
	   a
	  / \
   A /   \ B
	/     \
   c-------b
	   C
*/
	setlocale (LC_ALL, "Portuguese");

	printf ("Digite o tamanho de cada lado de um Triângulo.\n");
	printf (" #\n");
	printf (" A: "); scanf ("%f", &A);
	printf (" B: "); scanf ("%f", &B);
	printf (" C: "); scanf ("%f", &C);
	printf (" #\n");

	if (A > 0 && B > 0 && C > 0)
	{
		//Calcula os ângulos de acordo com os valores dados.
		a = (pow (A, 2) + pow (B, 2) - pow (C, 2)) / (2 * A * B);
		b = (pow (B, 2) + pow (C, 2) - pow (A, 2)) / (2 * B * C);
		c = (pow (C, 2) + pow (A, 2) - pow (B, 2)) / (2 * C * A);

		a = acos(a) * 180 / M_PI;
		b = acos(b) * 180 / M_PI;
		c = acos(c) * 180 / M_PI;

		//Calcula o maior valor.
		if      (a >= b && a >= c) {angulomax = a;}
		else if (b >= a && b >= c) {angulomax = b;}
		else if (c >= a && c >= b) {angulomax = c;}

		if (angulomax == 90)
		{
			printf ("Os valores pertencem a um Triângulo Retângulo.\n");
		}
		else if (angulomax > 90)
		{
			printf ("Os valores pertencem a um Triângulo Obtusângulo.\n");
		}
		else if  (angulomax < 90)
		{
			printf ("Os valores pertencem a um Triângulo Acutângulo.\n");
		}
		else
		{
			printf ("Os valores pertencem a um Triângulo escaleno.\n");
		}
		printf ("\nÂngulo Encontrado -> %.f\n", angulomax);
	} else { printf ("\n!!Os valores dados são invalidos para um Triângulo!!\n"); }

	

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}