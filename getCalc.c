#include <stdio.h>
#include <stdlib.h>

#define LINELEN 282

// CODIGO DE PROVINCIA
char *cpro [52] = {
		"Alava", "Albacete", "Alicante", "Almeria", "Avila", "Badajoz", 
		"Baleares", "Barcelona", "Burgos", "Caceres", "Cadiz", "Castellon", 
		"Ciudad Real", "Cordoba", "Coruna", "Cuenca", "Girona", "Granada", 
		"Guadalajara", "Gipuzkoa", "Huelva", "Huesca", "Jaén", "Leon", 
		"Lleida", "La Rioja", "Lugo", "Madrid", "Malaga", "Murcia", 
		"Navarra", "Ourense", "Asturias", "Palencia", "Las Palmas", 
		"Pontevedra", "Salamanca", "Santa Cruz de Tenerife", "Cantabria", 
		"Segovia", "Sevilla", "Soria", "Tarragona", "Teruel", "Toledo", 
		"Valencia", "Valladolid", "Bizkaia", "Zamora", "Zaragoza", 
		"Ceuta", "Melilla"};

int main(int argc, char const *argv[]) {
	int index;

	printf ("CPRO\t\n");

	FILE *finp = fopen ("censo2011.txt", "rb");
	char line[LINELEN+1]; line[LINELEN-2] = ' '; line[LINELEN] = '\0';

	while (1) {
		fread (line, sizeof (char), LINELEN, finp);
			// PROVINCIA
			index = (line[0]-'0')*10 + line[1] - '0' - 1;
			printf ("index = %i\n", index);
		
			printf ("%s\n", cpro[index]);
		}


	fclose (finp);	
	return 0;
}