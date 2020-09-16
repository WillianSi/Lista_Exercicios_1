#include<stdio.h>
#include<string.h>

//Crie um programa que receba 2 valores e um operador 
//aritmético básico (+  -  *  /) e apresente o resultado 
//do cálculo. Utilize switch case.

int main()
{
        float num1,num2;
        char oper;

            printf("\nDigite a expressao: \n");

            scanf("%f", &num1);
            scanf("%c",&oper);
            scanf("%f", &num2);

            printf("%.2f %c %.2f = ", num1,oper,num2);

            switch( oper )
            {
                case '+':
                        printf("%.2f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("%.2f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("%.2f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("%.2f\n\n", num1 / num2);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
            }
	
	system("PAUSE");
	return 0;
}
