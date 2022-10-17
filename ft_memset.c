/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:08:45 by rakhsas           #+#    #+#             */
/*   Updated: 2022/10/13 13:43:36 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)b;
	// if (!c)
	// 	return ((void *)src);
	while (i < len)
	{
		i++[src] = (unsigned char)c;
	}
	return ((void *)src);
}
