/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:04:14 by jchennak          #+#    #+#             */
/*   Updated: 2021/11/13 01:05:38 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	lensrc;
	size_t	i;

	dstlen = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize <= dstlen)
		lensrc += dstzise;
	else 
		lensrc += dstlen;
	i = 0;
	if (size)
	{
		while (lensrc < size - 1 && src[i])
		{
			dst[destlen] = src[i];
			dstlen++;
			i++;
		}
		dst[dstlen] = '\0';
	}
	return (lensrc);
}
