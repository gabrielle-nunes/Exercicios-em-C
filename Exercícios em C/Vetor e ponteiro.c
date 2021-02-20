    #include <stdio.h>
    #include <stdlib.h> //necessário para usar as funções malloc() e free()
    #include <conio.h>
    int main(void)
    {
      float *v; //definindo o ponteiro v
      int i, num_componentes;
	  float media;
      
      printf("Informe o numero de componentes do vetor\n");
      scanf("%d", &num_componentes);
      
      v = (float *) malloc(num_componentes * sizeof(float));
      
      for (i = 0; i < num_componentes; i++)
      {
        printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
        scanf("%f",&v[i]);
      }
      
	  media = ((i = 0;i < num_componentes; i++)/(10));
      printf("\n A média dos valores digitados é: \n\n");
      
     // for (i = 0;i < num_componentes; i++)
     // {
     //   printf("%.2f\n",v[i]);
     // }
      
      free(v);
      
      getch();
      return 0;
    }
