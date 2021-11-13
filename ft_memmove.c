/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:11:14 by jchennak          #+#    #+#             */
/*   Updated: 2021/11/13 17:17:13 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*newsrc;
	unsigned char	*newdst;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	newsrc = (unsigned char *)src;
	newdst = (unsigned char *)dst;
	i = 0;
	if (newdst > newsrc)
		while (len-- > 0)
			newdst[len] = newsrc[len];
	else
	{
		while (i < len)
		{	
			newdst[i] = newsrc[i];
			i++;
		}
	}
	return (dst);
}
