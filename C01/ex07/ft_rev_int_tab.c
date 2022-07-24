void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
    int aux;
    int i;

    i = 0;
    while (i < size/2)
    {
        aux = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = aux;
        i++;
    }
}