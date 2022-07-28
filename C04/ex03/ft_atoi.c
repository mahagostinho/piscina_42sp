
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str);
int whitespaces(char a);

int ft_atoi(char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] != '\0' && whitespaces(str[i]))
        i++;
    while ((str[i] == '-' || str[i] == '+') && str[i] != '\0') 
    {
		if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (sign * result);
}

int whitespaces(char a)
{
    if (a == 32 || (a >= 9 && a <= 13))
        return 1;
    else
        return 0;
}

int	main(void)
{
	char *str = " ---+--+1234ab567";
	
	printf("Entrada: %s \n", str);
	printf("%d \n", ft_atoi(str));
    printf("Pela biblioteca: %d \n", atoi("1234ab567"));
}