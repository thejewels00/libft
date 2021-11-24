#include <stdlib.h>

static char     **ft_freeall(char **tab, int i)
{
        int             a;

        a = 0;
        while (a <= i)
        {
                free(tab[a]);
                a++;
        }
        free(tab);
        return (NULL);
}

static int      ft_nbrmot(char const *s, char a)
{
        int             i;
        int             nbrmot;

        i = 0;
        nbrmot = 0;
        while (s[i])
        {
                if (s[i] != a)
                {
                        nbrmot++;
                        while (s[i] && s[i] != a)
                                i++;
                }
                else
                        i++;
        }
        return (nbrmot);
}

static char     **ft_allocationlpl(char **t, char const *s, char a, int n)
{
        int             l;
        int             len;
        int             c;

        l = 0;
        c = 0;
        while (l < n && s[c])
        {
                len = 0;
                while (s[c] && s[c] != a)
                {
                        len++;
                        c++;
                }
                if (len != 0)
                {
                        if (!(t[l] = (char *)malloc(sizeof(char) * (len + 1))))
                                return (ft_freeall(t, l));
                        l++;
                }
                c++;
        }
        t[n] = 0;
        return (t);
}

static void     ft_remplissage(char **t, char const *s, char a, int n)
{
        int             l;
        int             c;
        int             cc;

        l = 0;
        c = 0;
        while (l < n && s[c])
        {
                cc = 0;
                if (s[c] != a)
                {
                        while (s[c] && s[c] != a)
                        {
                                t[l][cc] = s[c];
                                cc++;
                                c++;
                        }
                        t[l][cc] = '\0';
                        l++;
                }
                else
                        c++;
        }
}

char    **ft_split(char const *s, char c)
{
        int             n;
        char    **t;

        if (s == NULL)
                return (0);
        n = ft_nbrmot(s, c);
        if (!(t = (char **)malloc(sizeof(char *) * (n + 1))))
                return (0);
        if (!(t = ft_allocationlpl(t, s, c, n)))
                return (0);
        ft_remplissage(t, s, c, n);
        return (t);
}
/*
#include <stdio.h>


int main()
{
        int     i;
        int     j;
        char **t;

        i = 0;
        t = ft_split("jawaher_chennak_1337",'-');
        while (i < 3)
        {
                j = 0;
                while (t[i][j] != '\0')
                {
                        printf("%c",t[i][j]);
                        j++;
                }
                printf("\n");
                i++;
        }
        return (0);
}
*/
