#include<stdio.h>

//Construa um programa em C que determine (imprima) 
//se um dado número N inteiro (recebido através do teclado) 
//é PAR ou ÍMPAR. (Usar o operador resto: Ex: N%2). 
int main()
{
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	if(n%2 == 0){
	printf("\n E um numero par");
	}else{
		printf("\nE um numero impar");
	}	
	
	printf("\n");
	
	system("PAUSE");
	return 0;	
}
