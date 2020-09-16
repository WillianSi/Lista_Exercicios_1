#include<stdio.h>

//O custo ao consumidor de um carro novo é a soma do 
//custo de fábrica com a percentagem do distribuidor 
//e dos impostos (aplicados ao custo de fábrica). 
//Supondo que a percentagem do distribuidor seja de 
//25% e os impostos de 42%, escrever um programa em 
//C que receba o custo de fábrica de um carro e escreva 
//o custo ao consumidor.

int main()
{
	int inpos;
	
	printf("Digite o peco de fabrica do carro:");
	scanf("%d",&inpos);
	
	printf("\nO preco final do carro he: %d",(((25*inpos)/100) + ((42*inpos)/100)) + inpos);
	
	system("PAUSE");
	return 0;
}
