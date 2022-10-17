/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:03:37 by rakhsas           #+#    #+#             */
/*   Updated: 2022/10/14 16:26:28 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (x[src])
		x++;
	while (i[src] && i + 1 < dstsize)
	{
		i[dst] = i[src];
		i++;
	}
	if (dstsize)
		i[dst] = '\0';
	return (x);
}
// size_t i;
	// size_t len_of_src;
	// size_t len_of_dst;

	// i = 1;
	// len_of_src = ft_strlen(src);
	// len_of_dst = ft_strlen(dst);
	// if (!dst)
	// 	return (len_of_src);
	// if (!src)
	// 	return (len_of_dst);
	// if (dstsize)
	// {
	// 	while (i < (dstsize - 1) && src[i])
	// 	{
	// 		i[dst] = i[src];
	// 		i++;
	// 	}
	// 	dst[i] = '\0';
	// }
	// return (len_of_src);