/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:04:14 by jchennak          #+#    #+#             */
/*   Updated: 2021/11/29 00:02:46 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	k;
	size_t	i;

	if (!dstsize)
		return(ft_strlen(src));
	j = ft_strlen(dst);
	k = ft_strlen(src);
	i = 0;
	if (j > dstsize)
		return ( k + dstsize);
	while ( j + i < dstsize - 1  && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + k);
}/*
#include<stdio.h>
#include<string.h>

int main()
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';

	printf("%zu\n", ft_strlcat(0, src, 0));
	printf("%s\n", dest);
	printf("%zu\n", strlcat(0, src, 0));
	printf("%s\n", dest);
}*/

