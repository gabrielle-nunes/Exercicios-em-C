#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int main (){
	setlocale(LC_ALL, "");
	char forc; //Usuário diz qual a temperatura se é Fahrenheit ou Celsius, F OR C.
	float temp; //Valor da temperatura informada pelo usuário. 
	float calc; //Variável para cálculo.

	printf("Se a temperatura digitada for em Celsius, digite C. Caso a temperatura com em Fahrenheit, digite F.\n");
	scanf("%c", &forc);

	switch(forc){
	case 'C':
		printf("Digite a temperatura: \n");
		scanf("%f", &temp);
		calc = (((9*temp)+160)/5);
		printf("A temperatura digitada em Celsius convertida para Farenheit é: %f\n", calc);
		break;
	case 'F':
		printf("Digite a temperatura: \n");
		scanf("%f", &temp);
		calc = (((5*temp)-160)/9);
		printf("A temperatura digitada em Farenheit convertida para Celsius é: %f\n", calc);
		break;
	default: printf("Não reconhecido. Por gentileza digitar F ou C.");
}
	
}
