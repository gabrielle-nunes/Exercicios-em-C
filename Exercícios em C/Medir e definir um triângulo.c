#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "");

	float ladoA, ladoB, ladoC;
	
	printf("Digite as medidas dos tr�s lados do tri�ngulo:\n");
	scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

	if (ladoA==0 && ladoB==0 && ladoC==0){
		printf ("Esta medida n�o forma um tri�ngulo.");
	}
	else{
	if (ladoA==ladoB && ladoA==ladoC && ladoB==ladoC){
		printf ("Este � um tri�ngulo equil�tero.");
	}
	else {
			if (ladoA!=ladoB && ladoA!=ladoC && ladoB!= ladoC){
			printf("Este � um tri�ngulo escaleno.");
			}
		else {
		printf("Este � um tri�ngulo is�sceles");
	}
}
}	
}
