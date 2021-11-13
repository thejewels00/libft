/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:25:57 by jchennak          #+#    #+#             */
/*   Updated: 2021/11/13 17:54:43 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;
	int	i;

	p = malloc(len + 1);
	if (!p)
		return(0);
	i = 0;
	while (start <= len && s[start])
	{
		p[i] =(char)s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
