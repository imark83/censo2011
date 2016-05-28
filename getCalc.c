#include <stdio.h>
#include <stdlib.h>

#define LINELEN 282

#include "codigos.h"

// INICIO Y LEN SEGÚN XLS DEL INE (EMPIEZA EN 1)
int toInt (char *line, int inicio, int len) {
	int rop = line[inicio-1]-'0';
	int i;
	for (i=1; i<len; ++i)
		rop = 10*rop + line[inicio-1+i] - '0';

	return rop;
}
char* getPais (int index) {
	int i = 0;
	while (cpais[i].index != index) ++i;
	return cpais[i].pais;
}

int main(int argc, char const *argv[]) {
	int index;

	FILE *finp = fopen ("censo2011.txt", "rb");
	char line[LINELEN+1]; line[LINELEN-2] = ' '; line[LINELEN] = '\0';

	int count = 0;
	while (1) {

		fread (line, sizeof (char), LINELEN, finp);
		// printf ("%s", line);

		printf ("%23s\t", "PROVINCIA");
		printf ("%4s\t", "AÑO");
		printf ("%4s\t", "EDAD");
		printf ("%6s\t", "SEXO");
		printf ("%47s\t", "NACIONALIDAD");
		printf ("%47s\n", "PAIS NACIMIENTO");

		// PROVINCIA		
		printf ("%23s\t", cpro[toInt (line, 1, 2)-1]);

		// AÑO DE NACIMIENTO
		printf ("%4i\t", toInt (line, 36, 4));

		// EDAD
		printf ("%4i\t", toInt (line, 40, 3));

		// SEXO
		printf ("%6s\t", (toInt (line, 43, 1) == 1)? "hombre" : "mujer");

		// NACIONALIDAD
		printf ("%47s\t", getPais (toInt (line, 44, 3)));

		// PAIS NACIMIENTO
		printf ("%47s\n", getPais (toInt (line, 47, 3)));

		// ESTADO CIVIL

		// ESTUDIA

		// NIVEL ESTUDIOS

		if (count++ == 3) 
			break;
	}


	fclose (finp);	
	return 0;
}