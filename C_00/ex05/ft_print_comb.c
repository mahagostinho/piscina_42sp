#include <unistd.h>

void ft_print_comb(void)
{
    char c;
    char d;
    char u;

    c = '0';
    d = '1';
    u = '2';
    while (c < '7')
    {
        while (d <= '8')
        {
            while (u <= '9')
            {
                write (1, &c, 1);
                write (1, &d, 1);
                write (1, &u, 1);
                write (1, ", ", 2);
                u++;
            }
            d++;
            u = d + 1;
        }
        c++;
        d = c + 1;
        u = d + 1;
    }
    write(1, "789", 3);
}