#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

    int tabuada = 0;
	int x;

    printf("\nDigite a tabuada que você deseja \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);

    for(x = 1; x<=10; ++x){
        
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
