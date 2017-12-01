#include <stdio.h>

void main(void)
{
	int rezultat;

	rezultat=EOF;
	if (rezultat == EOF){
		fprintf(stderr, "Eroare la printf\n");
	}
	
	printf("\033[33m");
	printf("bla");
	getchar();
}