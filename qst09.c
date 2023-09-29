#include <stdio.h>
#include <locale.h>

int main ()
{

	int saida = 0; //usado para a saida do loop.
	int candidato01 = 0, candidato02 = 0, candidato03 = 0, candidato04 = 0;
	int voto_branco = 0, voto_nulo = 0;
	int voto;

	setlocale (LC_ALL, "Portuguese");

	printf ("\n|| Voto Presidencial ||\n\n");

	do
	{
		printf ("Digite o codigo do candidato desejado.\n Stroncio: 1\n Grastinildo: 2\n Barreira: 3\n Cloves: 4\n");
		printf ("\nCaso queria um voto nulo digite 5 e 6 para voto branco.\n\n#: ");
		scanf ("%d", &voto);

		switch (voto)
		{
			case 0:
				saida++;
				break;
			case 1:
				candidato01++;
				printf ("\nVoto registrado!\n\n");
				break;
			case 2:
				candidato02++;
				printf ("\nVoto registrado!\n\n");
				break;
			case 3:
				candidato03++;
				printf ("\nVoto registrado!\n\n");
				break;
			case 4:
				candidato04++;
				printf ("\nVoto registrado!\n\n");
				break;
			case 5:
				voto_nulo++;
				printf ("\nVOTO NULO RECONHECIDO!\n\n");
				break;
			case 6:
				voto_branco++;
				printf ("\nVOTO BRANCO RECONHECIDO!\n\n");
		}
	} while (saida == 0);

	printf ("Votos totais de cada candidato;\n Stroncio: %d\n Grastinildo: %d\n Barreira: %d\n Cloves: %d\n\n",
			candidato01, candidato02, candidato03, candidato04);
	printf (" Votos nulos: %d\n Votos brancos: %d\n", voto_nulo, voto_branco);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}