#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "");

	float ladoA, ladoB, ladoC;
	
	printf("Digite as medidas dos três lados do triângulo:\n");
	scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

	if (ladoA==0 && ladoB==0 && ladoC==0){
		printf ("Esta medida não forma um triângulo.");
	}
	else{
	if (ladoA==ladoB && ladoA==ladoC && ladoB==ladoC){
		printf ("Este é um triângulo equilátero.");
	}
	else {
			if (ladoA!=ladoB && ladoA!=ladoC && ladoB!= ladoC){
			printf("Este é um triângulo escaleno.");
			}
		else {
		printf("Este é um triângulo isósceles");
	}
}
}	
}
