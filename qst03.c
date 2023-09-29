#include <stdio.h>
#include <locale.h>

int main ()
{
	float A, B, C;
	int ERR = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("Digite o tamanho de cada lado de um triângulo.\n");
	printf (" #\n");
	printf (" A: "); scanf ("%f", &A);
	printf (" B: "); scanf ("%f", &B);
	printf (" C: "); scanf ("%f", &C);
	printf (" #\n");

	if (A > 0 && B > 0 && C > 0)
	{
		if (A == B && B == C)
		{
			printf ("Os valores são de um Triângulo equilátero.");
		}
		else if (A == B || B == C || A == C)
		{
			printf ("Os valores são de um Triangulo isósceles.");
		}
		else
		{
			printf ("Os valores são de um Triângulo escaleno.");
		}
	} else { printf ("Os valores dados são invalidos para um triângulo."); }

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}