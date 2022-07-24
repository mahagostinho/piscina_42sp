#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int size = 9;
    int i;
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
    ft_rev_int_tab(tab, size);

    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
}
