// programa que lê número inteiro de 1 a 7 e imprime o dia semana 

#include <stdio.h>
int main (){
    int n1;
    
    printf ("Digite um número (1-7): ");
    scanf ("%d", &n1);
    switch (n1) {
	 case 1: 
		printf ("Domingo");
		break;
	 case 2: 
		printf ("Segunda-feira");
		break;
	 case 3: 
		printf("Terça-feira");
		break;
	 case 4: 
        printf("Quarta-feira");
        break;
    case 5: 
        printf("Quinta-feira");
        break;
    case 6: 
        printf("Sexta-feira");
        break;
    case 7: 
        printf("Sábado");
        break;
	 default:
		printf("Dia inválido");
		break;
    }
return 0; 
}
    