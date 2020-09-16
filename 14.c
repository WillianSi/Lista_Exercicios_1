#include<stdio.h>
#include<math.h>

// Construa um programa em C para determinar se o indivíduo está com um peso favorável. 
// Essa situação é determinada através do IMC (Índice de Massa Corpórea), que é definida 
// como sendo a relação entre o peso (PESO) e o quadrado da Altura (ALTURA) do indivíduo.
 
int main(){
	
        float peso,al,imc;

        printf("Peso: ");
        scanf("%f",&peso);
        printf("Altura: ");
        scanf("%f",&al);

        imc=pow(al,2)/peso;
		
        if (imc<20){
            printf("Abaixo do peso");
        }            
        else if (imc>=20 && imc<25){
            printf("Peso normal");
        }
        else if (imc>=25 && imc<30){
            printf("Sobre Peso");
        }
        else if (imc>30 && imc<=40){
            printf("Obeso");
        }
        else if (imc>40){
            printf("Obeso Mórbido");
        }
    
    printf("\n");
	
	system("PAUSE");
	return 0;
}             
