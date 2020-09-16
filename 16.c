#include<stdio.h>

//Você deve escrever um programa para, dadas as coordenadas (X, Y) do 
//ponto de contato da bola com o solo, determinar se uma bola bateu no 
//solo dentro ou fora da semi-quadra. Note que se a bola bate na linha 
//divisória ela é considerada uma bola dentro. 

int main()
{
	int x, y, resul;
	 	
	printf("Digite o valor X: ");
	scanf("%d",&x);
	
	printf("Digite o valor Y: ");
	scanf("%d",&y);
	
	if(x < 0 || x > 432 || y < 0 || y > 468){
		printf("\nFORA");	
	}else{
		printf("\nDENTRO");	
	}
	
	printf("\n");
	
	system("PAUSE");
	return 0;	
}
