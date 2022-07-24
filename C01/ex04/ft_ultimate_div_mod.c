void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = aux / *b;
    *b = aux % *b;
}
