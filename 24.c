#include<stdio.h>
#include<string.h>

//Construa um programa em C para calcular a média de valores PARES e ÍMPARES, 
//que serão digitados pelo usuário. Ao final o programa deve mostrar estas duas
// médias. Pergunte ao usuário se ele deseja continuar a cada iteração.
 
int main()
{
	int numero, nome, cont1=0 ,cont2=0 , re1=0,re2=0,respostas1,respostas2;
	
	
	do{	
		printf("numero: ");
		scanf("%d",&numero);
		
		printf("Deseja comtinuar: ");
		scanf("%d",&nome);
			
		if(numero%2 > 0){
			re1 += numero;
			cont1++;
			respostas1= re1/cont1;	
		}
		else if(numero%2 == 0){
			re2 += numero;
			cont2++;
			respostas2= re2/cont2;	
		}
	}while(nome!= 1);
	 
	printf("A média de valores pares: %d\n",respostas1);
	printf("A média de valores impares: %d\n",respostas2); 

	system("PAUSE");
	return 0;
}
	

