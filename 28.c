#include<stdio.h>

//Faça um programa para ler um número indeterminado de dados, contendo cada um,
//a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém 
//o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.

int main()
{
	int idade, cont=0;
	float media=0, soma;
	do{	
		printf("Digite uma idade: ");
		scanf("%d",&idade);
		
		soma += idade;
		cont += 1; 
		
	}while(idade > 0);
	
	 soma -= idade;
	 cont -= 1;
	 media = soma / cont;
	 
	printf("A média de valores pares: %.0f\n",soma);
	printf("A média de valores pares: %d\n",cont);
	printf("A média de valores pares: %.2f\n",media); 

	system("PAUSE");
	return 0;
}
	

