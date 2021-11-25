/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:18:31 by jchennak          #+#    #+#             */
/*   Updated: 2021/11/13 02:05:37 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	long 	nbr;
	int	sign;

	sign = 1;
	i = 0;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= '\b' && str[i] <= '\r'))
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	} 
	while (ft_isdigit(str[i]) && str[i])
			nbr = nbr * 10 + str[i++] - '0';
	return (sign * nbr);
}
