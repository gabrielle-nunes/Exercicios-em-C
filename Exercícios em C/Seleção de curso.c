#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main (){
	setlocale(LC_ALL, "");
	
	char cod;

	printf("Por favor digite o c�digo do curso desejado: \n");
	printf(" A) 101 - Sistemas de informa��o \n B) 102 - Engenharia de software\n");
	printf(" C) 113 - Gest�o da informa��o\n D) 119 - Jogos digitais\n E) 120 - Redes de computadores\n");
	scanf("%c", &cod);

	switch(cod){
	case'A':
		printf("Voc� selecionou o curso de Sistemas de informa��o.\n");
		break;
	case'B':
		printf("Voc� selecionou o curso de Engenharia de software.\n");
		break;
	case'C':
		printf("Voc� selecionou o curso de Gest�o da informa��o.\n");
		break;
	case'D':
		printf("Voc� selecionou o curso de Jogos digitais.\n");
		break;
	case'E':
		printf("Voc� selecionou o curso de Redes de computadores.\n");
		break;
	default: printf("C�digo inv�lido. Por favor verifique novamente.");
}	
}
