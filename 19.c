#include<stdio.h>
 
//Crie um programa em C que leia um valor e informe se ele é primo. Um número primo é divisível só por 1 e ele mesmo.
 
int main() 
{
	int num, i, resultado = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i = 2; i <= num / 2; i++){
	    if (num % i == 0){
	       resultado++;
	    }
	}
	  
	if (resultado == 0)
    printf("%d e um numero primo\n", num);
	else
    printf("%d nao e um numero primo\n", num);
	
	system("PAUSE");
	return 0;
}
