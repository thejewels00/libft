#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = malloc(len)))
		return (0);
	(void)ft_strlcpy(str, s1, len);
	(void)ft_strlcat(str, s2, len);
	return (str);
}
