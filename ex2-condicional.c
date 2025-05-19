//Exercício 2: Calculadora de Operações Básicas
//Intermediário - switch-case)
//Crie uma calculadora que leia dois números e um operador (+, -, *, /) e, usando switch-case, realize a operação correspondente.
//Trate o caso de divisão por zero.

#include <stdio.h>
int main (){
    float n1, n2;
    char operador;
    
    printf ("Digite dois números e um operador (+,-, *,/): \n");
    scanf ("%f %f %c", &n1, &n2, &operador);
    switch (operador) {
	 case '+': 
		printf ("%.2f", n1 + n2);
		break;
	 case '-': 
		printf ("%.2f", n1 - n2);
		break;
	 case '*': 
		printf("%.2f", n1 * n2);
		break;
	 case '/': 
		printf("%.2f", n1 / n2);
		break;
	 default:
		printf("operador inválido");
		break;
}
return 0;    
    
}