/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:27:25 by rakhsas           #+#    #+#             */
/*   Updated: 2022/10/14 21:03:50 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_i;
	size_t	rslt;

	if (!dstsize)
		return (0);
	if (dstsize == 0)
		rslt = ft_strlen(src);
	else if (dstsize < ft_strlen(dst))
		rslt = ft_strlen(src) + dstsize;
	else
		rslt = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	while (i[dst])
		i++;
	src_i = 0;
	while (src_i[src] && (i + 1) < dstsize)
	{
		i[dst] = src_i[src];
		src_i++;
		i++;
	}
	dst[i] = '\0';
	return (rslt);
}
