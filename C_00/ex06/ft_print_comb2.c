#include <unistd.h>

void ft_print_comb2(void)
{
    int number_a;
    int number_b;
    char a;
    char b;
    
    number_a = 0;
    number_b = 34;
    a = number_a + '0';
    b = number_b + '0';
    write(1, &a, 1);
    write(1, &b, 1);
   

}