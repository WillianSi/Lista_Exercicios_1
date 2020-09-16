#include<stdio.h>

//Usando switch, escreva um programa que leia um inteiro entre 1 e 7 
//e imprima o dia da semana correspondente a este número. Isto e, 
//domingo se 1, segunda-feira se 2, e assim por diante.  
int main()
{
	int sema;
	
	printf("Digite o numero da semana: ");
	scanf("%d",&sema);
	
	printf("\nHoje he:\n");
	
	switch(sema){
		case 1: sema == 1;
		printf("Domigo");
		break;
		
		case 2: sema == 2;
		printf("Segunda-feira");
		break;
		
		case 3: sema == 3;
		printf("Terca-feira");
		break;
		
		case 4: sema == 4;
		printf("Quarta-feira");
		break;
		
		case 5: sema == 5;
		printf("Quinta-feira");
		break;
		case 6: sema == 6;
		printf("sexta-feira");
		break;
		
		case 7: sema == 7;
		printf("Sabado");
		break;
		
		default:
		printf("Invalido");
		break;
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
