#include <stdio.h>
#include <locale.h>

int main ()
{
	float A, B, C;
	int ERR = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("Digite o tamanho de cada lado de um tri�ngulo.\n");
	printf (" #\n");
	printf (" A: "); scanf ("%f", &A);
	printf (" B: "); scanf ("%f", &B);
	printf (" C: "); scanf ("%f", &C);
	printf (" #\n");

	if (A > 0 && B > 0 && C > 0)
	{
		if (A == B && B == C)
		{
			printf ("Os valores s�o de um Tri�ngulo equil�tero.");
		}
		else if (A == B || B == C || A == C)
		{
			printf ("Os valores s�o de um Triangulo is�sceles.");
		}
		else
		{
			printf ("Os valores s�o de um Tri�ngulo escaleno.");
		}
	} else { printf ("Os valores dados s�o invalidos para um tri�ngulo."); }

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}