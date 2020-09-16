#include<stdio.h>

//Faça um programa que receba dois números e mostre qual deles é o maior.  
int main()
{
	float n, r;
	printf("Digite um numero: ");
	scanf("%f",&n);
	
	printf("Digite outro numero: ");
	scanf("%f",&r);
	
	if(n > r){
		printf("O numero %.2f e maior numero\n",n);	
		
	}else{
		printf("O numero %.2f e maior numero\n",r);
	}
	
	system("PAUSE");
	return 0;
}
