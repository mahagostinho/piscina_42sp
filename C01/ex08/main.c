#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int size = 11;
    int tab[] = {5, -2, 18, 15, 14, 27, -12, 35, 0, 10, 10};
    int i = 0;
	
    while(i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }

    printf("\n");

	ft_sort_int_tab(tab, size);
	
    i = 0;
    while(i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
}
