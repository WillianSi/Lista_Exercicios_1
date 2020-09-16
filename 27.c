#include<stdio.h>
#include<stdlib.h>

//Gere um número aleatório entre 0 e 19. Receba um número informado pelo usuário 
//até que ele acerte o número aleatório gerado. Apresente quantas tentativas 
//foram necessárias. Para gerar um número aleatório.

int main()
{
	int aleatorio, numero, cont=0; 
	do{		
		srand(time(NULL));
		aleatorio = rand()%20;
		scanf("%d",&numero); 
		cont++; 
	}while(numero!=aleatorio);
	 
	printf("Aleatorio:%d | Seu numero:%d\n", aleatorio, numero); 
	printf("Foram necessarias %d tentativas\n", cont); 

	system("PAUSE");
	return 0;
}
	

