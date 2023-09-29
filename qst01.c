#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{

	int ERR = 0; //ERR é usado para determinar erros no codigo.
	double x;


	setlocale (LC_ALL, "Portuguese");
	do
	{
		ERR = 0;

		printf ("Insira o X para o cálculo de f(x) = (5 * x + 3) / (x ^ 2 - 16)\n#: "); 
		scanf ("%lf", &x);

		x = (5 * x + 3)/ (sqrt (x * x - 16));

		if (isnan(x) != 0 || isinf (x) != 0)
		{
			printf ("!!RESULTADO INVALIDO!!\n!!TENTE NOVAMENTE!!\n\n");
			ERR = 1;
		}
	} while (ERR != 0);

	printf ("O resultado desta conta foi: %.4lf", x);
	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}