#include <unistd.h>

void ft_is_negative(int n);

int main(void)
{
    ft_is_negative(0);
    write(1, "\n", 1);
}