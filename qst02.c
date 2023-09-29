#include <stdio.h>
#include <locale.h>

int main ()
{

	int altura_chico = 150, altura_ze = 110;
	int anos = 0;

	setlocale (LC_ALL, "Portuguese");

	while (altura_ze <= altura_chico)
	{
		altura_chico += 2;
		altura_ze += 3;
		anos++;
	}

	printf ("Demorou %d Anos para Zé finalmente ser maior do que o chico!", anos);
	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}