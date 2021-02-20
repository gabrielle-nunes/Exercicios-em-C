#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "");
	
	char cod;

	printf("Por favor digite o código do curso desejado: \n");
	printf(" A) 101 - Sistemas de informação \n B) 102 - Engenharia de software\n");
	printf(" C) 113 - Gestão da informação\n D) 119 - Jogos digitais\n E) 120 - Redes de computadores\n");
	scanf("%c", &cod);

	switch(cod){
	case'A':
		printf("Você selecionou o curso de Sistemas de informação.\n");
		break;
	case'B':
		printf("Você selecionou o curso de Engenharia de software.\n");
		break;
	case'C':
		printf("Você selecionou o curso de Gestão da informação.\n");
		break;
	case'D':
		printf("Você selecionou o curso de Jogos digitais.\n");
		break;
	case'E':
		printf("Você selecionou o curso de Redes de computadores.\n");
		break;
	default: printf("Código inválido. Por favor verifique novamente.");
}	
}
