#include <unistd.h>

void ft_is_negative(int n);

int main(void)
{
    ft_is_negative(-42);
    write(1, "\n", 1);
}