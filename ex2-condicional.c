#include <stdio.h>
int main (){
    float n1, n2;
    char operador;
    
    printf ("Digite dois números e um operador (+,-, *,/): \n");
    scanf ("%f %f %c", &n1, &n2, &operador);
    switch (operador) {
	 case '+': 
		printf ("Resultado: %.2f", n1 + n2);
		break;
	 case '-': 
		printf ("Resultado: %.2f", n1 - n2);
		break;
	 case '*': 
		printf("Resultado: %.2f", n1 * n2);
		break;
	 case '/': 
	      if (n2 == 0) {
             printf("Erro: divisão por zero não é permitida.\n");
            } else {
                printf("Resultado: %.2f", n1 / n2);
            }
        break;
	 default:
		printf("operador inválido");
		break;
}
return 0;    
    
}
