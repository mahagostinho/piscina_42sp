#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[] = "Se essa rua se essa rua fosse minha...";
    char to_find[] = "rua";
    
    printf("%s \n", ft_strstr(str, to_find));
	
}

char *ft_strstr(char *str, char *to_find)
{
    int s;
    int t;

    s = 0;
    t = 0;
    if (to_find[t] == '\0')
		return (str);
    while (str[s] != '\0')
    {
        while (str[s + t] == to_find[t])
        {
            t++;
            if (to_find[t] == '\0')
			    return (str + s);
        }
        s++;
    }
    return (0);
}
