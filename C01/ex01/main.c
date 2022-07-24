#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int a;
    int *********nbr;
    int ********nbr1;
    int *******nbr2;
    int ******nbr3;
    int *****nbr4;
    int ****nbr5;
    int ***nbr6;
    int **nbr7;
    int *nbr8;

    a = 32;
    nbr8 = &a;
    nbr7 = &nbr8;
    nbr6 = &nbr7;
    nbr5 = &nbr6;
    nbr4 = &nbr5;
    nbr3 = &nbr4;
    nbr2 = &nbr3;
    nbr1 = &nbr2;
    nbr = &nbr1;

    printf("Endereço na memória: %p \n", nbr);
    printf("Valor da variável: %d \n", *********nbr);
    ft_ultimate_ft(nbr);
    printf("Endereço na memória: %p \n", nbr);
    printf("Valor da variável: %d \n", *********nbr);
}