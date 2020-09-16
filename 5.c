#include<stdio.h>
#include<math.h>

//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: 
//O número digitado ao quadrado • A raiz quadrada do número digitado 

int main()
{
	float num, dol, resul;
	
	printf("Digite um valor: ");
	scanf("%f",&num);
	
	if(num > 0){
		printf("\nO seu valor ao quadrado e: %.2f",pow(num,2));	
		printf("\nA raiz quadrada do seu valor e: %.2f",sqrt(num));
	}
	
	system("PAUSE");
	return 0;	
}
