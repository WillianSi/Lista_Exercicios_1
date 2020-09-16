#include<stdio.h>

// Freitas tem 1,50m e cresce 1 centímetros por ano, enquanto Russo tem 1,40m 
// e cresce 2 centímetros por ano.  Construir um programa que calcule iterativamente 
// e imprima quantos anos serão necessários para que Russo seja maior que Freitas, 
// considerando que ambos nunca param de crescer.
 
int main()
{
	float freitas = 1.50, russo = 1.40;
	int ano = 0;
	
	while(freitas > russo){
		freitas += 0.01;
		russo += 0.02;
		ano += 1;	
		printf("Freitas: %.2f Russo: %.2f\n",freitas,russo);_sleep(500);		
	}
	printf("\nSerao necessarios %d anos para que Russo seja maior que Freitas\n",ano);

	system("PAUSE");
	return 0;
}
