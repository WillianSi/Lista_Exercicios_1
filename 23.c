#include <stdio.h>

//Construa um programa para calcular a potência de um valor informado como base por um valor informado como expoente, sem utilizar a função pow. 

int main()
{
	int base, expoente, pot, i; 
	
	printf("\nDigite um numero de base: ");
	scanf("%d", &base);
	printf("Digite um numero de expoemte nao-negativo: ");
	scanf("%d", &expoente);
	
	pot = 1;
	i = 0;
	
	while (i != expoente){
	    pot = pot * base;
	    i = i + 1;
	}
	
	printf("\n%d elevado a %d = %d\n", base, expoente, pot);

	system("PAUSE");
	return 0;
}

