#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned   int, char))
{
        char                    *str;
        unsigned int    i;

        if (!s || !f)
                return (0);
        if (!(str = ft_strdup(s)))
                return (NULL);
        i = 0;
        while (s[i])
        {
                str[i] = f(i, s[i]);
                i++;
        }
        return (str);
}

