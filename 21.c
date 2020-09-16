#include<stdio.h>

//A série de Fibonacci é formada pela sequência:    
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...   Escreva um programa  
//que  gere  a  série  de  FIBONACCI  até  o N-ésimo termo informado 
//pelo usuário. 

int main(){

	int a=0, b=1, aux, i, n;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("Série de Fibonacci:\n");
	printf("%d\n", b);
	
	for(i = 0; i < n; i++){
    	aux = a + b;
    	a = b;
    	b = aux;
    	printf("%d\n", aux);
	}
	
	system("PAUSE");
	return 0;
}
