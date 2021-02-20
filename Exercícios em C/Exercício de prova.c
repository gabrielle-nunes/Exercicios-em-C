#include <stdio.h>
#include <math.h>

void main (){
	int i, j, k;
	int vet[9];
	
	for (i = 1; i<= 3; i++) {
		k = 3;
		for (j = 0; j<= i*3-1; j++){
			if (j>= (i-1)*3) {
				vet[j] = k;
				k = k + 2;
			}	else {
					k++;
				}
			
		}
	}
	for (i = 0; i<9; i++)
		printf("%d", vet[i]);
}
