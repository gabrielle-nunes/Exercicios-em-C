void main()
{
int fat, n;
printf("Digite um valor para calcular o fatorial: ");
scanf("%d", &n);
 
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
 
printf("\nFatorial calculado: %d", fat);

}
