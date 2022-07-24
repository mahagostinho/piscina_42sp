#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int a;
    int *nbr; // declaração do ponteiro

    a = 24;
    nbr = &a; // ponteiro nbr recebe o endereço da variável a do tipo int
    ft_ft(nbr); // chama a função cuja entrada é um ponteiro para inteiros
    
    printf("Endereço na memória: %p \n", nbr);
    printf("Valor no endereço: %d \n", *nbr);
}
