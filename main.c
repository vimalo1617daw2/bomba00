#include <stdio.h>
#include <unistd.h>

int main() {
	int compte;
	
	for (compte=9;compte>0;compte--) {
		printf("Compte enrere: %d segons\n",compte);
		usleep(1000000);
	}
	printf("BOOOUUUUMMMMM\n");
	return(0);
}
