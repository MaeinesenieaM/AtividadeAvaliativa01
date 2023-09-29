#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");

	int x, y;

	printf ("\n!===Coordenadas===!\n\n");

	printf ("X: "); scanf ("%d", &x); 
	printf ("Y: "); scanf ("%d", &y);

	if (x == 0 && y == 0)
	{
		printf ("\nOrigem.\n");
	}
	else if (x == 0)
	{
		printf ("\nEixo X\n");
	}
	else if (y == 0)
	{
		printf ("\nEixo Y\n");
	}
	/*
		Q2 | Q1
		===#===    O Plano que esta representando.
		Q3 | Q4
	*/
	else if (x > 0)
	{
		if (y > 0)
		{
			printf ("\n Q1\n");
			printf ("\n |@\n=#=\n | ");
		}
		else
		{
			printf ("\n Q4\n");
			printf ("\n | \n=#=\n |@");
		}
	}
	else
	{
		if (y > 0)
		{
			printf ("\n Q2\n");
			printf ("\n@| \n=#=\n | ");
		}
		else
		{
			printf ("\n Q3\n");
			printf ("\n | \n=#=\n@| ");
		}
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}